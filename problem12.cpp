#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long int diff =0;
    long long int triangular_number = 0;
    int divisors = 0;
    int max_divisors = 0;
    
    
    while(max_divisors<500){
        
        divisors = 0;
        diff=diff+1;
        triangular_number = triangular_number + diff;
        
        
        for(int i = 1; i<sqrt(triangular_number);i++){
        if(triangular_number%i==i){
            divisors = divisors+1;
        }
        if(triangular_number%i==0){
            divisors=divisors+2;
        }
        }
        
        
        if(divisors>max_divisors){
            max_divisors=divisors;
        }
}
    
    cout<<triangular_number<<endl;
    cout<<divisors<<endl;
    cout<<max_divisors;
    return 0;
}
