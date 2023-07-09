#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long; // [[C++11]] replaces old typedefs used in C
using ll = long long;			// [[C++11]] replaces old typedefs used in C


// the parameters are passed by reference, this means that the modifications that
// are applied inside the function will affect the original variable that we passed in
// for more info search about-> pass by value AND pass by reference C++
void discount(ull& x, ull& y, ull & z){
    if(z!= 0){
        z--;
        return;//we use early returns to scape the function, it is possible to "return; " in a function that returns void in C++
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
    discount(a,t,n);
    std::cout<<a*5 + t*7 + n*13;   
}