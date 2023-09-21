#include<iostream>
using namespace std;

class calc
{
	public:
		void add(int a,int b)
		{
		 cout<<"Addition is : "<<a+b<<endl;	
		}
		
		void sub(int a,int b)
		{
			cout<<"Subtraction is : "<<a-b<<endl;
		}
	   
	    void multi(int a,int b)
		{
		 cout<<"Multiplication is : "<<a*b<<endl;	
		}
		
		void div(float a,float b)
		{
		 cout<<"Division is : "<<a/b<<endl;	
		}
};

main()
{
	calc c;
	c.add(3,4);
	c.div(40,5);
	c.multi(5,8);
	c.sub(50,34);
}
