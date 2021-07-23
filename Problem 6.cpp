#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0,sum_sqared =0;
    for(int i =1;i<=100;i++){
        sum += i;
        sum_sqared += i*i;
    }
    int diff =0;
    diff = sum*sum - sum_sqared;
    cout<<diff;
}
