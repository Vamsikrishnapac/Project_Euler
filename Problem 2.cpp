#include <bits/stdc++.h>
using namespace std;

//scope: -   1,1,2,3,5,8,13......4000000

int fib(long long int limit){
    if(limit <2)
        return 0;
    
    long long int f1 =0, f2 =2;
    long long int sum = f1 + f2;
    long long int f3;
    
    while(f2<=limit){
       
        long long int f3= 4*f2+f1;
      if(f3>=limit)
        break;
    
        f1 = f2;
        f2 = f3;
        sum+=f2;
    
        
        
    }
    return sum;
    
    
}
int main(){
    long long int lim;
    lim = 4000000;
    cout<<fib(lim);
    
}
