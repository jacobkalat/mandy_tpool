/* 
 * WHAT THIS EXAMPLE DOES
 * 
 * We create a pool of 4 threads and then add 40 tasks to the pool(20 task1 
 * functions and 20 task2 functions). task1 and task2 simply print which thread is running them.
 * 
 * As soon as we add the tasks to the pool, the threads will run them. It can happen that 
 * you see a single thread running all the tasks (highly unlikely). It is up the OS to
 * decide which thread will run what. So it is not an error of the thread pool but rather
 * a decision of the OS.
 * 
 * */

#include <stdio.h>
#include <pthread.h>
#include <stdint.h>

#include "thpool.h"

typedef struct region{
    double min_real;
    double min_complex;
    double max_real;
    double max_complex;
    int r_offset;
    int c_offset;
    int r_n;
    int c_n;
    // pointer into the image
} region_t;

void task(void *arg){
    printf("Thread #%u working on %d\n", (int)pthread_self(), (int) arg);
    // allocate space for the result

    // call mandibrot on the region

    // set the image data in a mutex (not really need for disjoint regions)

}


int main(){




    puts("Making threadpool with 4 threads");
    threadpool thpool = thpool_init(4);

    puts("Adding MxN tasks to threadpool");
    // given the number of subregions

    int i;
    for (i=0; i<40; i++){

        // allocate a region for each task
        // set the limits on the subregion for each task
        thpool_add_work(thpool, task, (void*)(uintptr_t)i); // pass in the region

    };

    thpool_wait(thpool);
    // dump the image out
    // deallocate regions

    puts("Killing threadpool");
    thpool_destroy(thpool);

    return 0;
}