
#include <iostream>
using namespace std;

//function

void print(int n){

    //base conditon
    if(n==0)return;
    //recursive call
    print(n-1);
    cout<<"Sarthak"<<endl;
}

//main function
int main() {
    int times;
    cout<<"Enter the no of times you want to call the name";
    cin>>times;
    print(times);
  

    return 0;
}