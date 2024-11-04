#include<iostream>
using namespace std;
class Father{
	protected:
		string surname = "SINGH ";
};
class son1:Father{
	string name = "ANKIT ";
	public:
	void show(){
		cout<<name<<surname<<endl;
	}
};

class son2:Father{
	string name = "GOVIND ";
	public:
	void dispa(){
		cout<<name<<surname<<endl;
	}
	
};
main()
{
	son1 s1;
	s1.show();
	son2 s2;
	s2.dispa();
}
