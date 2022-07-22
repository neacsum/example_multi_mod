/*
  This is part of an example showing how to manage multiple projects using
  symbolic links and CPM - A C/C++ Package Manager. For more details
  see: https://github.com/neacsum/cpm
*/

//how to include header files from this package
#include <module_A/A.h>
#include <module_B/B.h>

int f_a (int i)
{
  return i + 1;
}