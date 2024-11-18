#include<iostream>
using namespace std;
class Aditya
{
	int num1 = 22, num2 = 28;
	public:
	
	void fun()
	{
		int sum = num1 + num2;
		cout<<"Addition "<<sum <<endl;
		
	}
	
	void fun(int a, int b)
	{
	
	int sub = a - b;
	cout<<" Subtraction "<<sub <<endl;
	}

};

	int main()
	{
		Aditya obj;
		obj.fun(); obj.fun (10,500);
		return 0; 
	}
