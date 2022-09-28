#include<iostream>
using namespace std;
int main(){
int n,i,remainder;
    int count=0;
    cout<<"Enter a number";
    cin>>n;

    for(i=1;i<=n;i++){
        remainder=n%i;
        if(remainder==0){
            count=count+1;
        }
    }

    if(count==2){
        cout<<"Number is prime";

    }
    else{
        cout<<"number is not prime";
    }
    
    


    return 0;

}
