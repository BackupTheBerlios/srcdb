#include "Language.h"

Language::Language()
{
  init("de");
}

Language::Language(string lang)
{
  init(lang);
}

/**
 * Initializes the language map "stringmap", and loads the keys and
 * values of the language file
 */

void Language::init(string lang)
{
  
  if(lang == "de")
  {
    ifstream in("lang.de");
    string s;

    while(getline(in, s))
    {
			stringmap[s.substr(0,s.find("="))] = s.substr(s.find("=")+1);
    }
		in.close();
   }
  if(lang == "eng")
  {
    ifstream in("lang.eng");
    string s;

    while(getline(in, s))
    {
			stringmap[s.substr(0,s.find("="))] = s.substr(s.find("=")+1);
    }
		in.close();
   }
  
}

/*
 * Returns the vlaue that belongs to the key string in the stringmap
 */

string Language::getLS(string key)
{
  return stringmap[key];
}

Language::~Language()
{


}

