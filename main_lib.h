#include <fstream>
#include <string>
#include <Pro/time_pro.h>
using namespace std;

#ifndef MAIN_LIB_H_
#define MAIN_LIB_H_


void start()
{
	system("touch ~/Desktop/C++/Projects/Download/src/youtube.txt");
	system("touch ~/Desktop/C++/Projects/Download/src/file.txt");
	system("touch ~/Desktop/C++/Projects/Download/src/temp_y.txt");
	system("touch ~/Desktop/C++/Projects/Download/src/temp_f.txt");
}

void youtube_add()
{
	printf("Just paste the URLs. When you finish enter \"Ctrl + C\" and \"Ctrl + X\"\n");
	system("chmod +x /root/Desktop/C++/Projects/Download/src/check.sh");
	system("/root/Desktop/C++/Projects/Download/src/check.sh");
	system("nano ~/Desktop/C++/Projects/Download/src/youtube.txt");
	wait(2);
}
void youtube_download()
{
	string s;
	string link;
	ifstream infile("/root/Desktop/C++/Projects/Download/src/youtube.txt", ios::in);
	while(!infile.eof())
	{	
		s = "youtube-dl ";
		infile >> link;
		wait_sec(5);
		s += link;
		system(s.c_str());
	}
}

void file_add()
{
	color();
	printf("Just paste the URLs. When you finish enter \"Ctrl + C\" and \"Ctrl + X\"\n");
	system("/root/Desktop/C++/Projects/Download/src/check.sh");
	system("nano ~/Desktop/C++/Projects/Download/src/file.txt");
	wait(2);
}

void file_download()
{
	color();
	string s;
	string link;
	ifstream infile("/root/Desktop/C++/Projects/Download/src/file.txt", ios::in);
	while(!infile.eof())
	{	
		s = "wget ";
		infile >> link;
		s += link;
		wait_sec(5);
		system(s.c_str());
	}
}

void f_file_download()
{
	color();
	string link; 
	string s = "wget ";
	printf("Enter link. You only have 15 seconds.\nLink: ");
	color();
	cin >> link;
	printf("You'll see the file when it's finished\n");
	wait(5);
	s += link;
	for (int i = 0; ; ++i)
		system(s.c_str());
}

void fyoutube_download()
{
	color();
	string link, s = "youtube-dl ";
	printf("Enter link.\nLink: ");
	color();
	cin >> link;
	printf("You'll see the video once it is finished\n");
	s += link;
	wait(5);
	for (int i = 0; ; ++i)
		system(s.c_str());
}

void stop()
{
	system("rm ~/Desktop/C++/Projects/Download/src/youtube.txt");
	system("rm ~/Desktop/C++/Projects/Download/src/file.txt");
	system("rm ~/Desktop/C++/Projects/Download/src/temp_y.txt");
	system("rm ~/Desktop/C++/Projects/Download/src/temp_f.txt");
}


#endif