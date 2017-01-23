#include "argumentHandler.hpp"


void ArgumentHandler::checkForArgs() {
  if (_argc < 2) {
    std::cerr << "Insufficient aguments!";
    throw 11;
  } else if (_argc > 1) {
      std::string a =""; 
      for (int i = 1; i < _argc; i++) {
       a += filehandler.ReadFromFile(_argv[i]);

      }  
    std::cout << countEverything(a); 
  } else if (_argc >= 3 )  {
      if (std::string(_argv[1]) == "-c") {       
        for (int i = 2; i < _argc; i++) {
          filehandler.ReadFromFile(_argv[i]);
        }
        std::cout << CountChars(filehandler.getInputString());
      } else if (std::string(_argv[1]) == "-l") {
          for (int i = 2; i < _argc; i++) {
            filehandler.ReadFromFile(_argv[i]);
          }
        std::cout << CountLines(filehandler.getInputString());
      } else if (std::string(_argv[1]) == "-w") {
          for (int i = 2; i < _argc; i++) {
            filehandler.ReadFromFile(_argv[i]);
          }
        std::cout << CountWords(filehandler.getInputString());  
    }
  }
}
   
void ArgumentHandler::set(int argc, char** argv) {
  _argc = argc;
  _argv = argv;
}
