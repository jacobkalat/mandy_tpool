# mandy_tpool
Project 3: Multi-Threaded Processor FarmDescription:The simple graphics project will now use atask pool with the number of tasksset to twice the number of physical cores(allocated to the virtual machine)and with the affinity ofthe threads set so each corewill likely have two tasks assigned to it.The region of interest for the Mandelbrotset will still be treated as a MxN collection of subregions, to be completed by the task pool.Minimum Requirements:1)Use thread affinityand a task pool.2)Proper use of program arguments and config files.3)Each task should update a its own buffer for the image region and then copy into a shared imagewhich is then displayed.4)Use a signal or share variable to determinewhen all of the regions have been calculated.5)Document (Design document, UML, code walkthroughetc) and test(unit test).Suggested Enhancements, For Fun•Allowor changing the color assignment (hue rotation)•Allow for auto zooming about a pointwith a dwelltime per image.•Launch OBS (or other program) fromsimple graphics to create a movieof thesimple graphics window