#include "FileHandler.hpp"

std::string Filehandler::ReadFromFile(char filename[]) {
  std::ifstream inputfile(filename);
  if (!inputfile) {
    throw "no file provided";
  }
  if (inputfile.fail()) {
    throw 'o':
  }
  std::stringstream buff;
  buff << inputfile.rdbuf();
  inputfile.close();
  inputString = buff.str();
  return inputString;   
}

std::string Filehandler::getInputString() {
  return inputString;
}
