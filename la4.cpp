#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	string s1=argv[1];
	cout <<s1<<endl;
	string s = "безза";
	cout << "Что ищем: " << s<<endl;
	if (s1.find(s)<=s1.length())
	{
		cout << "подстрока входит\n";
		
		return (0);
	}
	else
	{
		cout << "подстрока Не входит\n";
	
		return (1);
	}
}

