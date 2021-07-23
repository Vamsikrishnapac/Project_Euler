#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j;
    int product, max_product =0;
    for(int i = 999;i>99;i--){
        for(int j =999;j>99;j--){
            product = i*j;
            if(max_product > product){
                break;
            }
            // ispalindrome
            int prod, prod_reverse =0;
            prod = product;
            while(prod!=0){
                prod_reverse = prod_reverse*10 + prod%10;
                prod /=10;
            }
            if((product == prod_reverse)&&product>max_product)
                max_product = product;
            
        }
    }
    cout<<max_product;
    return 0;
}
