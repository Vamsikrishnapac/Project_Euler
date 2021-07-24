#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    // 3+4+5 = 12;
    // 5 + 12 + 13  = 30;
    // as the numbers grow a gets smaller, b gets bigger, inorder to cope with c;
    
    for(int a =1; a<=1000/3;a++){
        for(b = a+1; b<=1000/2; b++){
            c = 1000 - a- b; // inorder to make code n**2, or n**3 if another loop for c
            if(pow(a,2)+pow(b,2)==pow(c,2)){
                cout<<a*b*c<<endl;
                cout<<a<<" "<<b<<" "<<c;
            }
        }
    }
}
