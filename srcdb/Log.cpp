#include "Log.h"

Log::Log(int GlobalLevel)
{
	iGlobalLevel = GlobalLevel;
}

void Log::writeLog(string sEntry, int iLevel)
{
	std::time_t t;
	std::tm local;
	std::time(&t);
	local = *std::localtime(&t);
	ofstream out("srcdb.log", std::ios::app);
	if ((iLevel & iGlobalLevel) > 0)
	{
		out << local.tm_mday << "." << local.tm_mon + 1 << "." << local.tm_year -100 + 2000 << " " << local.tm_hour << ":" << local.tm_min << ":";
		if(local.tm_sec < 10) out << "0";
		out << local.tm_sec << "   " << sEntry << "\n";
	}
	out.close();
}

Log::~Log()
{
}
