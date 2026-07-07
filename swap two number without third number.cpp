#include <iostream>
using namespace std;
int main()
{

int m1,m2;
cout<<"Enter the first number:";
cin>>m1;
cout<<"Enter the seconf number:";
cin>>m2;
cout<<"\n Before the number swap ";
cout<<"\n Number 1:"<<  m1;
cout<<"\n Number 2:"<<  m2;
// Swapping logic using XOR 
m1 = m1^m2;
m2 = m1^m2;
m1 = m1^m2;
cout <<"\n After the swapping the Number ";
cout<<"\n Number 1:"<< m1;
cout<<"\n Number 2:"<< m2;

}
