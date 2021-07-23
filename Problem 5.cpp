#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    
    return gcd(b,a%b);
}
int main(){
    int prod=1;
    int i =1;
    /*
    while(i!=0){
        prod= prod*i;
        i--;
    }
    cout<<prod;
    */
    
    // 1,2,3,4,5,6,7,8,9
    //1,8,9,5,7
 /*
    while(i!=10){
        if(prod%i==0){
            prod=prod;
        }
        else{
            prod =prod*i;
        }
        i++;
    }
    */
    //this above code failed near 9
    while(i!=21){
        if(prod%i==0){
            prod = prod;
        }
        else{
            prod = prod*i/gcd(prod,i);
        }
        i++;
    }
    cout<<prod;
    
}
