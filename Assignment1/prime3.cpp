#include<iostream>
using namespace std;
int main(){
    int n,i,rem,count=0;
    cout<<"Enter a number\n";
    cin>>n;

    for(i=2;i<=n;i++){
        rem = n%i;
        if(rem==0){
            count++;
        }
    }
        if(count==1){
            cout<<"no is prime";
        }
        else{
            cout<<"no is not prime";
        }
        
    
    

    
    return 0;
}
