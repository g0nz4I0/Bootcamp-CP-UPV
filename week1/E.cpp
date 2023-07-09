#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long;
using ll = long long;

void find_max(unsigned long long& x, unsigned long long& y, unsigned long long& z){
    if(z!= 0){
        z--;
        return;
    }
    if(y != 0){
        y--;
        return;
    }
    if(x != 0){
        x--;
        return;
    }    
}
int main(){
    ull a,t,n;
    std::cin>>a>>t>>n;
    find_max(a,t,n);
    std::cout<<a*5 + t*7 + n*13;   
}