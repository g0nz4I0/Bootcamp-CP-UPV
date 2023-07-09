#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long;
using ll = long long;

int main(){
    int c,k;
    std::cin>>c>>k;
    if(c%k == 0){
        std::cout<<"YES";
        return 0;
    }
    std::cout<<"NO";
    return 0;
}