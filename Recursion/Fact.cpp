#include<iostream>
using namespace std;


int fact(int n){

    //base case
    if(n==1 || n==0){

        return 1;
    }

    //recursive case

    return n*fact(n-1);
}


//main function 
int main()
{

 int number;
 cout<<"Enter the number you want to find the factorial of:";
 cin>>number;

 int a=fact(number);

 cout<<"The factorial of the number is :"<<a<<endl;





   return 0;
} // namespace std;
