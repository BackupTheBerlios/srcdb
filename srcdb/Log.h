#include <fstream>
#include <string>
#include <ctime>

using namespace std;

class Log
{

	int iGlobalLevel;

	public:
	Log(int GlobalLevel);
	void writeLog(string sLogEntry, int iLevel);
	~Log();
};

