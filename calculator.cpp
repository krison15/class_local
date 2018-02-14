#include <iostream>

int main()
{
  using namespace std;
  int a, b, c;
  char op;

  cout<<"Enter Value 1: "<<endl;
  cin>> a;
  cout<<"Enter Operation: +,-,*,/"<<endl;
  cin>> op;
  cout<<"Enter Value 2: "<<endl;
  cin>>b;

if (op=='+') c = a + b;
if (op=='-') c = a - b;
if (op=='*') c = a * b;
if (op=='/') c = a / b;

cout<< c<<endl;

return 0;
}
