#include <iostream>
#include <colors>
#include <Pro/time_pro.h>
#include <mylib/mytime.h>
#include "lib/main_lib.h"
#include "optional_lib.h"
using namespace std;

int main(int argc, char const *argv[])
{
	system("clear");
	int prompt;
	color();
	showHeader();
	color();
	cout << "\t\t\t\t\t\t"; wtime();
	stop();
	start();
	color();
	printf("Select your option\n\n");
	printf("1. Youtube Videos\n");
	printf("2. File Downloads\n");
	printf("3. Forceful downlods\n");
	printf("99. Exit\n\n");
	start:
	color();
	cout << underline << "download>" << underline1 << " ";
	color();
	cin >> prompt;
	switch(prompt)
	{
		case 1:
			youtube_add();
			youtube_download();
			break;
		case 2:
			file_add();
			file_download();
			break;
		case 3:
			printf("1. Youtube Video\n");
			printf("2. File Download\n\n");
			a:
			cout << underline << "download:force>" << underline1 << " ";
			cin >> prompt;
			switch(prompt)
			{
				case 1:
					fyoutube_download();
					break;
				case 2:
					f_file_download();
					break;
				case 3:
					default:
						printf("Invalid Input\n");
						goto a;
			}
			break;
		case 99:
			printf("Good Bye!!!\n");
			exit(1);
			stop();
		default:
			printf("Invalid option\n");
			goto start;
	}
	stop();
	return 0;
}