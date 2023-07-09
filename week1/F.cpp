#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long;
using ll = long long;

int main(){
	ll input{};
	std::cin>>input;
	ll passed_hrs = 0;
	ll min = 0;
    ll hours = 12;
	if(input > 60){
		passed_hrs = input/60;
		min = input%60;
		if(passed_hrs > 24){
			passed_hrs = passed_hrs%24; 
		}
        if(passed_hrs >= 12)
        {
            hours = hours + passed_hrs - 24;
        
        }else{
            hours += passed_hrs;
        }

		std::cout<<std::setfill('0')<<std::setw(2)<<hours<<":"<<std::setfill('0')<<std::setw(2)<<min;
	}else{
	    std::cout<<"12:"<<std::setfill('0')<<std::setw(2)<<input;//no more than one hour passed
	}
 
} 