#include <iostream>
using namespace std;
int main(){
	fstream file("student.x",ios::in|ios::out);
	cout<<"position of pointer before reading :"<<file.tellg()<<endl;
	char ch;
	cout<<"move pointer o 13",,endl;
	file.seekg(13);
	while(file.get(ch)){
		cout<<"cahracter read"<<ch<<"position of pointer after reading : "<<file.tellg()<<endl;
	}
	file.close();
	return 0;
}