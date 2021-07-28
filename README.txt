Source.cpp is based on google test.
Build the file using Visual Studio.
And in command prompt, the following line of code can be used to generate report.

OpenCppCoverage --sources <Location of Source File> -- <Location of Executable>

Suppose the Project name is Project1. 
And the location of source file is C:\Users\Project1\Project1\Source.cpp
The location of .exe file is C:\Users\Project1\Debug\Project1.exe

Then the command line statement is
OpenCppCoverage --sources C:\Users\Project1\Project1\Source.cpp -- C:\Users\Project1\Debug\Project1.exe



The location of HTML report will be displayed in CMD after the execution of above line.


1.PNG gives the overall report. Click on the source files to see the lines of code covered.
2.PNG gives the coverage for Source.cpp


NOTE: To install OpenCppCoverage, visit: https://github.com/OpenCppCoverage/OpenCppCoverage


