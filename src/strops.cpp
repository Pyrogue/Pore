#include "strops.h"
//chars
char Uppercase(char c)
{
	if(c>='a' && c<='z')	//if lowercase
		return c-'a'+'A';	//make uppercase
	return c;				//else nothing.
}
char Lowercase(char c)
{
	if(c>='A' && c<='Z')	//if Uppercase
		return c-'A'+'a';	//make Lowercase
	return c;				//else nothing
}
//strings
string Uppercase(string s)
{
	unsigned int len = s.length();
	for(unsigned int a=0; a<len; ++a)
		s[a] = Uppercase(s[a]);
	return s;
}
string Lowercase(string s)
{
	unsigned int len = s.length();
	for(unsigned int a=0; a<len; ++a)
		s[a] = Lowercase(s[a]);
	return s;
}
string Trim(string line, string whitespace)	//C++11 version
{
	while(whitespace.find(line.front()) != string::npos && !line.empty())
		line.erase(line.begin());
	while(whitespace.find(line.back()) != string::npos && !line.empty())
		line.pop_back();
	return line;
}
/*string Trim(string line, string whitespace) //c++OLD HAT version
{
	while(!line.empty() && whitespace.find(line[0] != string::npos)
		line.erase(0,1);
	while(!line.empty() && whitespace.find(line[line.length()-1] != string::npos)
		line.erase(line.length()-1,1);
	return line;
}*/
/*//conversions	//depreciated! this already exists in the string library dummy.
string Convert(int a)
{
	if(a==0)	return "0";

	string s;	//output
	bool n=0;	//is negative
	
	if(a<0)		//if negative
	{
		n=1;
		a=-a;
	}
	while(a!=0)	//while still digits
	{
		s=char((a%10)+'0')+s;
		a/=10;
	}
	if(n) s='-'+s;	//if was negative
	return s;
}
string Convert(double a)
{
	string s = "";
	return s;
}
int Convert(string s)
{
	return stoi(s);	//well this exists...
}
double Convert(string s)
{
	return stod(s);	//well this exists...
}
string I_Str(int a)
{
	return Convert<string>(a);
}*/

