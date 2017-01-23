#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <sstream>
#include <string>
#include <fstream>

class Filehandler {
private:
  std::string inputString;
public:
  std::string ReadFromFile(char filename[]);
  std::string getInputString();
};


#endif
