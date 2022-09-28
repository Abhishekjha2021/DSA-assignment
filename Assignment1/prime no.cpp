#include<iostream>
using namespace std;
int main(){
    int i,j,count,num1,num2;

    cout<<"Enter the numbers between which you want to find prime no's\n";
    cin>>num1>>num2;

    for(i=num1;i<=num2;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
            if(j==i){
                cout<<" "<<i;
            
        }
        
    }
    /*if(count==1){
            cout<<"no is prime";
        }
        else{
            cout<<"no is not prime";
        }*/
        return 0;
}
