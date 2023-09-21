#include<iostream>
using namespace std;

class number
{
	int num;
	
	public:
    //	constructor 		
		number(int n)
		{
			num = n;
		}
		friend int maxnumber(number,number);
	
};

    int maxnumber (number n1,number n2)
    {
    	if(n1.num > n2.num)
    	 return n1.num;
    	 else
    	 return n2.num;
	}
	
main()
{
	number num1(15),num2(20);
	
	cout<<"maximum number is : "<<maxnumber(num1,num2)<<endl;
	}	
