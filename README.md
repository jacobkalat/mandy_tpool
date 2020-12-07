# mandy_tpool
## Project 3: Multi-Threaded Processor Farm
### Description:
The simple graphics project will now use a task pool with the number of tasks set to twice the number of physical cores (allocated to the virtual machine) and with the affinity of the threads set so each core will likely have two tasks assigned to it. 
The region of interest for the Mandelbrot set will still be treated as a MxN collection of subregions, to be completed by the task pool.

### Minimum Requirements:
1)Use thread affinity and a task pool.
2)Proper use of program arguments and config files.
3)Each task should update a its own buffer for the image region and then copy into a shared image which is then displayed.
4)Use a signal or share variable to determine when all of the regions have been calculated.
5)Document (Design document, UML, code walkthrough, etc) and test(unit test).

### Suggested Enhancements,For Fun
•Allowor changing the color assignment (hue rotation)
•Allow for auto zooming about a pointwith a dwell time per image.
•Launch OBS (or other program) from simple graphics to create a movie of the simple graphics window
