#include "Language.cpp"
#include "Log.cpp"

#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[])
{
  Language l("eng");
  cout << l.getLS("key") << "\n";
  Language d;
  cout << d.getLS("key") << "\n";
	Log log(5);
	log.writeLog("Level 2",2);
	log.writeLog("Level 4",4);
	log.writeLog("Level 1",1);
}

