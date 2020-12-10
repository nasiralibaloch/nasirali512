#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char n[7];
	ifstream file("text.txt");
	file>>n;
	cout<<"enter ur name"<<n<<endl;
	file.close();
}
