#include <string>
#include <fstream>
#include <iostream>
#include <map>


#ifndef STASH3_H
#define STASH3_H

using namespace std;

class Language 
{

 private:
  map<string, string> stringmap;

 public:
  Language();
  Language(string lang);
  void init(string lang);
  string getLS(string key);
  ~Language();
};
#endif

