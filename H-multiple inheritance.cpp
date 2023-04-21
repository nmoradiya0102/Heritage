#include<iostream>

using namespace std;

class x{
	private:
		int id;
		char name[100];
		char role[100];
		int salary;

		public:
	void display(){
		cout<<"enter employee id :  ";
		cin>>id;
		cout<<"enter employee name :  ";
		cin>>name;
		cout<<"enter employee role :  ";
		cin>>role;
		cout<<"enter employee salary :  ";
		cin>>salary;
		cout<<endl<<"employee id : "<<id;
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee id : "<<role;
		cout<<endl<<"employee name : "<<salary<<endl;
	}
};
class y{
	private:
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
	public:
		void display(){
		cout<<endl<<"enter employee experience :  ";
		cin>>experience;
		cout<<"enter employee company name :  ";
		cin>>comp_name;
		cout<<"enter employee address :  ";
		cin>>address;
		cout<<"enter employee email :  ";
		cin>>email;
		cout<<"enter employee contact :  ";
		cin>>contact;
		cout<<endl<<"employee experience : "<<experience;
		cout<<endl<<"employee company name : "<<comp_name;
		cout<<endl<<"employee address : "<<address;
		cout<<endl<<"employee email : "<<email;
		cout<<endl<<"employee contact5 : "<<contact;
	}
};
class z:public x,public y{
};

int main(){
	
	z obj;
	obj.x::display();
	obj.y::display();
	
	return 0;
}





