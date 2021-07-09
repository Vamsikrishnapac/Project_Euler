#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int number){
    int x= (number-1)/3;
    int y= (number-1)/5;
    int z= (number-1)/15;
    int s =0;
    s = (3 + 3*x)*x/2 + (5+ 5*y)*y/2 - (15+ 15*z)*z/2;
    return s;
}
int main() {
    int num;
	cin>>num;
	cout<<sum(num);
}
