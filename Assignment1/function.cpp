#include <iostream>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
        int f;
        if(a>b&&a>c&&a>d){
            f=a;
        }
        else if(b>a&&b>c&&b>d){
            f=b;
        }
        else if(c>b&&c>a&&c>d){
            f=c;
        }
         else{
            f=d;
        }
    return f;}
    
    int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    return 0;
}
	
