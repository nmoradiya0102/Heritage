#include<iostream>

using namespace std;

class m{
		public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		int contact;
	void setter(){
		cout<<"enter employee id :  ";
		cin>>id;
		cout<<"enter employee name :  ";
		cin>>name;
		cout<<"enter employee role :  ";
		cin>>role;
	}
};
class n:public m{
	
	public:
		void setter(){
		cout<<endl<<"enter employee salary :  ";
		cin>>salary;
		cout<<"enter employee experience :  ";
		cin>>experience;
	}
};
class o:public n{
	public:
		void setter(){
		cout<<"enter employee company name :  ";
		cin>>comp_name;
		cout<<"enter employee address :  ";
		cin>>address;
		}
		void getter(){
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee role : "<<role;
		cout<<endl<<"employee salary : "<<salary<<endl;
		}
};
class p:public o{
	public:
	void setter(){
		cout<<"enter employee email :  ";
		cin>>email;
		cout<<"enter employee contact :  ";
		cin>>contact;
	}
	void getter(){
		cout<<endl<<"employee id : "<<id;
		cout<<endl<<"employee name : "<<name;
		cout<<endl<<"employee role : "<<role;
		cout<<endl<<"employee salary : "<<salary;
		cout<<endl<<"employee experience : "<<experience;
		cout<<endl<<"employee company name : "<<comp_name;
		cout<<endl<<"employee address : "<<address;
		cout<<endl<<"employee email : "<<email;
		cout<<endl<<"employee contact5 : "<<contact<<endl;
	}
};

int main(){
	
	p obj;
	obj.m::setter();
	obj.n::setter();
	obj.o::setter();
	obj.p::setter();
	obj.o::getter();
	obj.getter();
	
	
	return 0;
}




