#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <list>
#include <locale.h>
#include <iomanip>

using namespace std;

int main()
{
	list<string> yoklama;
	setlocale(LC_ALL, "Turkish"); 
	ifstream fPtr("Lab5.txt", ios::in); // to read file
	ofstream wPtr("YoklamaListesi.txt", ios::out); // to write file
	if (!fPtr && !wPtr)
	{
		cerr << ("File could not be opened.");
		exit(EXIT_FAILURE);
	}
	while (!fPtr.eof())
	{
		int p1, p2, p3, p4;
		string alt_input = {};
		string input;
		getline(fPtr, input);
		int input_length = input.size();
		//cout << input << endl;
		while (input != "\0") 
		{
			p1 = input.find(":", 0);
			p2 = input.find(":", p1 + 1);
			p3 = input.find(":", p2 + 1);
			//cout << p3 << endl;
			alt_input = input.substr(p3 + 2, input_length);
			if (alt_input[0] == '2')
			{
				string okulNo = {};
				string isim = {};
				int alt_input_size = alt_input.size();
				//cout << "SAYI" << endl;
				//cout << alt_input << endl;
				p4 = alt_input.find(" ", 0);
				okulNo = alt_input.substr(0, p4);
				isim = alt_input.substr(p4 + 1, alt_input_size);
				//	cout << okulNo << endl;
				//	cout << isim << endl;
				string push = okulNo + ' ' + isim;
				yoklama.push_back(push);
			}
			else
			{
				string okulNo = {};
				string push;
				string isim = {};
				//cout << "HARF" << endl;
				int alt_input_size = alt_input.size();
				int p5 = alt_input.find("2", 0);
				int p6 = p5 + 1;
				okulNo = alt_input.substr(p6, alt_input_size);
				isim = alt_input.substr(0, p5);
				//cout << okulNo << endl;
				//cout << isim << endl;
				if (isim != "Emin Umut Gerçek")
				{
					push = '2' + okulNo + ' ' + isim;
					yoklama.push_back(push);
				}
				else
				{
					push = "21997548 " + isim;
					yoklama.push_back(push);
				}
			}
			break;
		}
	}
	yoklama.sort() ;
	list<string>::iterator iterBeg = yoklama.end();
	list<string>::iterator iterLast = yoklama.end();
	iterLast-- ;
	iterLast-- ;
	iterBeg-- ;
	int size = yoklama.size();
	while(*iterBeg!="\0")
	{
		if(*iterBeg==*iterLast)
		{
			list<string>::iterator iterCur = iterBeg ;
			iterBeg-- ;
			yoklama.erase(iterCur) ;
			iterLast-- ;
		}
		else
		{
			iterLast-- ;
			iterBeg-- ;
		}
	}
	yoklama.reverse() ;
	int last_size = yoklama.size();
	for (int i = 0;i < last_size;i++)
	{
		//cout << yoklama.back() << endl;
		wPtr << i + 1 << "." << setw(5) << yoklama.back() << endl;
		yoklama.pop_back();
	}
	return 0;
}