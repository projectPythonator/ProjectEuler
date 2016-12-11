//author agis daniels
//How many distinct terms are in the sequence generated by ab for 2 ≤ a ≤ 100 and 2 ≤ b ≤ 100?
#include <iostream> //cout
#include <math.h>   //pow
#include <set>      //set

using namespace std;

//get_amount()
//this function uses set to only get unique elements to return the rightr size
int get_amount(){
	set<double> powers;
	for(int a=2; a<101; ++a){
		auto it=powers.insert(pow(a,2));
		auto i=it.first;
		for(int b=3; b<101; ++b){
			i=powers.insert(i,pow(a,b));
		}
	}
	return powers.size();
}

int main(){
	int ans=get_amount();
	cout<<"the amount of unique is "<<ans<<endl;
	return 0;
}
