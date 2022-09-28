#include<iostream>
using namespace std;
int main(){
    int x,y,i,GCD;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    for(i=1;i<=x && i<=y;++i){

        if(x%i==0 && y%i==0){

            GCD=i;
           
        }
       
    }
  
    cout<<"GCD of"<<" "<< x <<" "<<"and"<<" "<< y <<"is"<<endl;
  
    cout<<GCD<<endl;
  
    return 0;

}
