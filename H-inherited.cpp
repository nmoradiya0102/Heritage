#include<iostream>

using namespace std;

class mother {
	public:
	void display(){
		cout<<"mother class";
	}
};
class daugther : public mother{
	public:
		void display(){
		cout<<"daugther class";
	}
};

int main(){
	daugther obj;
	
	obj.mother::display();
	cout<<endl;
	obj.display();
	
	
	return 0;
}

