#include <iostream>
#include <string.h>
#include <typeinfo>

using namespace std;

class Sample;
class Sample{
	private:
		int a;
	public :
	Sample(){
		cout<<"Constructor run."<<endl;
	}
	Sample(Sample &s){
		cout<<"Copy Constructor."<<endl;
	}
	void setData(int a){
		this->a = a;
		showData();
	}
	void showData(){
		cout<<a<<endl;
	}
};

int main(void){
	system("cls");
	cout<<"Program End."<<endl;

	return 0;
}
