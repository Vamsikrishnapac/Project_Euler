#include <bits/stdc++.h>
using namespace std;


bool isprime(int n){
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int input(int v){
    vector<unsigned int> Vel;
    int count = 2;
    int prime= 3;
    while(v>count){
        prime+=2;
        if(isprime(prime)) 
            count+=1;
    }
    return prime;
    
}
int main(){
    int s = 10001;
    cout<<input(s);
    
    
}
