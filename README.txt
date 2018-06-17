This is a README file for data structures project. In this program include data structures like List, Stack and Queue.

CONTENTS
        1. AUTHOR
        2. INTRODUCTION
        3. PREREQUISITES
        4. BUILD
        5. DIRECTORY STRUCTURE
        6. USAGE
        7. DOCUMENTATION
        

1. AUTHOR
Hovhannisyan Arsem, Galeyan Arakel.
E-mail: arsen1994t@gmail.com
		<<<<<<<<<<<<Arakel mail>>>>>>>>>>>>>
	
2. INTRODUCTION
The project gives implementations of 
1. List
2. Stack
3. Queue

3. PREREQUISITES
The following third party tools should be installed before the
compilation.

Tools:
g++
doxygen

4. BUILD
Build the project
	make
	
Delete secondary files
	make clean
	
Run test
	make test

5. DIRECTORY STRUCTURE
- List – the top directory
	- src – should contain the source code of the project
	- makefile – the top makefile for building the project
	- docs -  for containing documentations
		/doxygen_config should contain file for doxygen configuration file

After building, the following directories should be created:
	- deps – should contain dependency files
	- obj – should contain oject files
	- bin – should contain executable file
	
7. DOCUMENTATION
"make docs" command generates doxygen documentation.

Doxygen also generates documentation from C/C++ code comments.

To see the generated documentation use ./docs/doxygen/html/index.html.
