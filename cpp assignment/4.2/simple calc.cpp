#include<iostream>
using namespace std;

class calc
{
	
	
	public:
	
		float a,b;
		
		void add()
		{
			cout<<"addition"<<endl;
			cout<<"enter value of a"<<endl;
			cout<<"enter value of b"<<endl;
			cin>>a>>b;
			
			cout<<"total is : "<<a+b<<endl;
			
		}
		
		void sub()
		{
			cout<<"sub"<<endl;
			cout<<"enter value of a"<<endl;
			cout<<"enter value of b"<<endl;
			cin>>a>>b;
			cout<<"total is : "<<a-b<<endl;
		}
		
		void multi()
		{
			cout<<"multi"<<endl;
			cout<<"enter value of a"<<endl;
			cout<<"enter value of b"<<endl;
			cin>>a>>b;
			cout<<"total is : "<<a*b<<endl;
		}
		
		void div()
		{
			cout<<"div"<<endl;
			cout<<"enter value of a"<<endl;
			cout<<"enter value of b"<<endl;
			cin>>a>>b;
			cout<<"total is : "<<a/b<<endl;
		}
};

main()
{
	calc c;
	c.add();
	c.sub();
	c.multi();
	c.div();
}
