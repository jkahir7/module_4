#include<iostream>

using namespace std;

class calc
{
	
	public:
		float num1;
		float num2;
		
		 calc(float x,float y)
		{
			num1=x;
			num2=y;
			
		}
		
		 add()
		{
			return num1+num2;
		}
		
		sub()
		{
			return num1-num2;
		}
		
		multy()
		{
			return num1*num2;
		}
		
		div()
		{
			if(num2 != 0)
			{
			 return num1/num2;
		    }
			 
			 else
			 cout<<"invalid num"<<endl;
		}
};

main()
{
	float x,y;
	
	cout<<"enter two values"<<endl;
	cin>>x>>y;
	
	calc c(x,y);
	
	cout<<"addition is : "<<c.add()<<endl;
	cout<<"substaction is : "<<c.sub()<<endl;
	cout<<"divition is : "<<c.div()<<endl;;
	cout<<"multiplication is : "<<c.multy()<<endl;
}
