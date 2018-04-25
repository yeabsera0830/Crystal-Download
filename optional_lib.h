#include <string>
#include <fstream>
#include <ctime>
using namespace std;

#ifndef OPTIONAL_LIB_H_
#define OPTIONAL_LIB_H_

void showHeader()
{
	srand(time(NULL));
	int x = 1 + rand() % 6;
	switch(x)
	{
		case 1:
			system("more /root/Desktop/C++/Projects/Download/build/1.txt");
			break;
		case 2:
			system("more /root/Desktop/C++/Projects/Download/build/12.txt");
			break;
		case 3:
			system("more /root/Desktop/C++/Projects/Download/build/13.txt");
			break;
		case 4:
			system("more /root/Desktop/C++/Projects/Download/build/2.txt");
			break;
		case 5:
			system("more /root/Desktop/C++/Projects/Download/build/3.txt");
			break;
		case 6:
			system("more /root/Desktop/C++/Projects/Download/build/4.txt");
			break;
	}
}

#endif
