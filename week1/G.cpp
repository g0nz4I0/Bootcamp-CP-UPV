#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long;
using ll = long long;

int main(){
    long long a,b;
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
                std::cout<<std::fixed<<(std::round(d*100.0)/100.0);
            }
            break;
        default:
            break;
    }
    return 0;
}