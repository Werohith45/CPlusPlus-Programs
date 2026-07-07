#include <iostream>
using namespace std;
int main()
{
int n,num, digit, rev =0;
cout<<"Enter a positive number: ";
cin>>num;

n =num;
while (num)
{
digit=num%10;
rev=(rev *10)+ digit;
num=num/10;
}
cout<<" \n The reverse of the number is: "<< rev;
if (n == rev)
cout<<" \n The number is a palindrome";
else
cout<<" \n The number is not a palindrome";

}
