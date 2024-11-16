#include<iostream>
using namespace std;
class add
{
	private:
		int a,b,c;
		public:
			void sum()
		{
	
			cout<<"Enter two values";
			cin>>a>>b;
			c=a+b;
			cout<<"sum is =" <<c;
		}
};

	int main()
	{
		add obj;
		obj.sum();
		return 0;
	}
