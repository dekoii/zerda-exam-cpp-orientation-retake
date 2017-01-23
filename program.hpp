#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include "argumentHandler.hpp"

class Program {
private:
  ArgumentHandler handler;
public:
  void run(int argc, char** argv);
};






#endif
