#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <string>
#include <cctype>

int CountChars(std::string input) {
  int counterChar = 0;
  for (std::string::iterator it = input.begin(); it != input.end(); it++) {
    counterChar++;
  }
  return counterChar;
}

int CountWords(std::string input) {
  int CounterWord = 1;
  for(std::string::iterator it = input.begin(); it != input.end(); it++) {
    if (*it == ' ') {
      CounterWord++;
    }  
  }
  return CounterWord;
}

int CountLines(std::string input) {
  int CounterLine = 1;
  for (std::string::iterator it = input.begin(); it != input.end(); it++) {
     if (*it == '\n') {
      CounterLine++;
    }
  } 
  return CounterLine;
}

int countEverything(std::string input) {
  return (CountChars(input) + CountWords(input) + CountLines(input));
}

#endif
