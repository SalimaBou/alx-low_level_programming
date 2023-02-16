Task-0:  runs a C file through the preprocessor and save the result into another file: gcc -E $CFILE > c
task-1: compiles a C file but does not link : gcc -c $Cfile
Task-2:  generates the assembly code of a C code and save it in an output file: gcc -s $CFILE
