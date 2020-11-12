#include <iostream>

using namespace std;

int main() 
{

int i = 1;


for(i=1; i <= 100; i++)
{
if(i%3 == 0 && i%5 == 0)
cout << "FizzBuzz" << endl;
else if(i%3 == 0)
cout << "Fizz" << endl;
else if(i%5 == 0)
cout << "Buzz" << endl;
else if(i%3 != 0 || i%5 != 0)
cout << i << endl;
}

return 0; 

}