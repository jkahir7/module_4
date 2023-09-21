#include<iostream>
using namespace std;

class cricketr
{

    public:
    	
    	int trun,average,match;
    	
    	void data()
    	{
    		cout<<"enter total run"<<endl;
    		cin>>trun;
    		cout<<"entar your match"<<endl;
    		cin>>match;
    		cout<<"your average is : "<<trun/match<<endl;
		}

	
};

class batsman : public cricketr
{
	
	
};

main()
{
	
	string name;
	cout<<"enter your name"<<endl;
	getline(cin,name);
	
	batsman b;
	b.data();
}
	
	

