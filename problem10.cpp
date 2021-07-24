#include <bits/stdc++.h>
using namespace std;

bool isprime(long long int n){
    for(long long int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long long int V = 3;
    long long int sum = 2;
    
    while(V<2000000){
        
        if(isprime(V)){
            sum=sum+V;
        }
        
        V=V+2;
    }
    
    cout<<sum;
    return 0;
}
