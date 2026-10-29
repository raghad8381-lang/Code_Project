#include<iostream>

using namespace std;

  int main()

{ char x;

cout<<"please enter character";

cin>>x;

if(x>='A'&& x<='Z'){cout<<"Capital";}

else if (x>='a' && x<='z'){cout<<"Small";}

else if (x>='0' && x<='9'){cout<<"Number";}

else {cout<<"Special character";}

 return 0;}
