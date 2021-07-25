#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 20;
    int arr[n][n];
    for( int j =0;j<n;j++){
        for( int i =0;i<n;i++){
            cin>>arr[i][j];
        }
    }
    unsigned long long int product ; 
    unsigned long long int greatest_product =0;
    for( int j =0;j<n;j++){
        for( int i =0; i<n; i++){
            
            
            if(j+3<n)
            {
                product = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
            }
            if(product>greatest_product)
            {
                greatest_product = product;
            }
            
            
            
            if(i+3<n){
                product = arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j];
            }
            if(product>greatest_product){
                greatest_product = product;
            }
            
            
            
            if((i+3<n)&&(j+3<n)){
                product = arr[i][j] * arr[i+1][j+1] * arr[i+2][j+2] * arr[i+3][j+3];
            }
            if(product>greatest_product){
                greatest_product = product;
            }
            
            
            
            if((i+3<n) && (j>=3)){
                product = arr[i][j] * arr[i+1][j-1] * arr[i+2][j-2] * arr[i+3][j-3];
            }
            if(product>greatest_product){
                greatest_product = product;
            }
            
        }
    }
    cout<<greatest_product<<endl;
    cout<<arr[3][5];
    return 0;
    
    // up 
    // horizontal  
    // top up right, bottom down left 
    // bottom down right, top up left 
    
    
}
