#include<iostream>
using namespace std;

class line
{
	public:
		
		inline float mul(float x,float y)
		{
			return( x*y);
		}
		
		inline float cube(float x)
		{
			return(x*x*x);
		}
};

main()
{
	
	float val1,val2;
	
	cout<<"enter two value"<<endl;
	cin>>val1>>val2;
	line l;
	cout<<"multi values is : "<<l.mul(val1,val2)<<endl;
	cout<<"cube values is : "<<l.cube(val1);
	
}
	
	
