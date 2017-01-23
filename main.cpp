#ifndef TEST

#include <iostream>
//#include "FileHandler.hpp"
#include "program.hpp"


int main (int argc, char** argv) {
 
  try { 
    Program program;
    program.run(argc, argv);
    return 0;
  }
  catch (int a) {
    std::cerr << "error occured";
    return a;
  }
  catch(const char* error) {
    std::cerr << error;
    return 22;
  }
  catch (char a) {
    std::cerr << "error while opening the file";
    return 2;
  }
}

#endif 





