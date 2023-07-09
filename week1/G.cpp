#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long; // [[C++11]] replaces old typedefs used in C
using ll = long long;			// [[C++11]] replaces old typedefs used in C

int main(){
    ll a,b;
    char c;
    std::cin>>a>>c>>b;
    switch(c){
        case '+':
            std::cout<< a +b;
            break;
        case '-':
            std::cout<< a- b;
            break;
        case '*':
            std::cout<< a * b;
            break;
        case '/':
            if( b == 0){
                std::cout<<"ERROR";
            }else{
                double d = (double)a/b;
                std::cout.precision(2);
                std::cout<<std::fixed<<(std::round(d*100.0)/100.0);// we use the inbuilt functions to solve this problem.
            }
            break;
        default:
            break;
    }
    return 0;
}