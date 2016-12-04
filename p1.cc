//author agis daniels
//goal is Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream> // cin cout 

using namespace std;

int main(){
	int up_lim=0, tot_sum=0 ;
	cout << "enter the upper limit"<<endl;
	cin >> up_lim;
	//loop for 0 to up_lim checking if i is div by 3 or 5 and summing those up
	for(int i=0; i<up_lim; ++i){
		if((i%3==0)||(i%5==0)){
			tot_sum+=i;
		}
	}
	cout << "sum of numbers below " << up_lim <<" is " << tot_sum << endl;
	return 0;
}
