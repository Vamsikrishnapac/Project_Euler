#include <bits/stdc++.h>
using namespace std;
// if even n ->n/2;
    // if odd n->3*n +1;
int main(){
    long long int collatz;
    long long int desirednumber = 0;
    long long int max_count =0;
    for(long long int i=2;i<1000000;i++){
        collatz = i;
        int count=0;
    while(collatz!=1){
        if(collatz%2==0){
            collatz = collatz/2;
        }
        else{
            collatz = collatz*3 +1;
        }
        count = count +1;
    }
    if(count>max_count){
        max_count = count;
        desirednumber = i;
    }
    }
    cout<< max_count<<endl;
    cout<<desirednumber;
}
