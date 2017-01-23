#ifndef ARGUMENTHANDLER_HPP
#define ARGUMENTHANDLER_HPP

#include <iostream>
#include "FileHandler.hpp"
#include "Counter.hpp"

class ArgumentHandler {
private:
  Filehandler filehandler;
  int _argc;
  char** _argv;
  
public:
  void set(int argc, char** argv);     
  void checkForArgs();
};

#endif
