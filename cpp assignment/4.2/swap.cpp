	#include <iostream>
using namespace std;
class Swap
{
private:
    int num1;
    int num2;
public:
    Swap(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }
    friend void swapNumbers(Swap &s);
    void display()
    {
        cout << "The swapped numbers are: " << num1 << " and " << num2 << endl;
    }
};
void swapNumbers(Swap &s)
{
    int temp = s.num1;
    s.num1 = s.num2;
    s.num2 = temp;
}
int main()
{
    Swap s1(10, 20);
    swapNumbers(s1);
    s1.display();
    return 0;
}
