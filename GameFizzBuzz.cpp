#include <iostream>
using namespace std;
int main (){
    for (int i=0;i<=100;i++){
        if (i%3==0 && i%5==0){
            cout<<"FizzBuzz";
            cout<<endl;
        }else if (i%3==0){
            cout<<"Fizz";
            cout<<endl;
        }else if (i%5==0){
            cout<<"Buzz";
            cout<<endl;
        }else{
            cout<<i<<endl;
        }
    }
    return 0;
}