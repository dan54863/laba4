#include <fstream>
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <cstdlib>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;

int main()
{
	  setlocale(LC_ALL, "rus");
	  string s;
	  pid_t f;
	  const char *c;
	  int i=0,j=0; 
	  int k,t=-1;
	  ifstream ifs ("/home/danil/123.txt");
	  while(getline(ifs, s))
	  {
	        t=-1;
		s="./la4 \""+s+"\"";
		c=s.c_str();
		switch (f=fork())
		{
			case -1: 
				cout << "Не работает\n";
			case 0:
				cout << "Дочерний PID: " << getpid() << endl;
				k = system(c);
				
				if (k==0)
					exit(0);
				else 
					exit(1);
			default:
				cout << "Родительский PID: " << getpid() << endl;	        		   wait (&t);
				if (WEXITSTATUS(t)==0)
				{
					j++;
				}
		//			execl("la4","", c, (char *)NULL);
		              
	  		}
		cout << endl;
	  }	
          cout<< j << endl;
	  ifs.close();
	  return (0);
}
