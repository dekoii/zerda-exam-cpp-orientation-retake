#include "program.hpp"


void Program::run(int argc, char** argv) {
    handler.set(argc, argv);
    handler.checkForArgs();
  }
