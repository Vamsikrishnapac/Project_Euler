#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin>> N;
    int v= pow(N,.5);
    /*
    if(v*v==N)
        cout<<v;*/
    int count =0;
    while(N%2==0){
        count =2;
        N=N/2;
    }
    while(N%3==0){
        count =3;
        N=N/3;
    }
    for(int i =5;i<sqrt(N);i=i+6){
        while(N%i==0){
            count = i;
            N= N/i;
        }
        while(N%(i+2)==0){
            count = i+2;
            N=N/(i+2);
        }
    }
    if(N>4){
        count = N;
    }
    /*
    if(N%2==0)
        count =2;
    if(N%3==0)
        count =3;
    
    for(int i = 0; i<v;i++){
        
    }
    */
    cout<<count;
        
    return 0;
    
}
