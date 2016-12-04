//author agis daniels
//goal is By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <iostream> // cin cout 

using namespace std;

//int get_fib_sum_rec(int end_goal,int cur, int last){
//  to run throgh the fib sequence up to endgoal 
//  and sum up the even terms
//  params::
//      end_goal :: the size of the sequence we will use
//      cur :: the cur fib num
//      last :: the last fib num
//  return the sum of the even fib numbers
int get_fib_sum_rec(int end_goal, int cur, int last){
	if(cur>=end_goal){
		return 0;
	}
	else{
		if(cur%2==0){
			return cur+get_fib_sum_rec(end_goal, cur+last, cur);
		}else{
			return get_fib_sum_rec(end_goal, cur+last, cur);
		}
	}
}
//int get_fib_sum_iter(int end_goal){
//  to run throgh the fib sequence up to endgoal 
//  and sum up the even terms
//  params::
//      end_goal :: the size of the sequence we will use
//  return the sum of the even fib numbers
int get_fib_sum_iter(int end_goal){
	//setting the varriables up to start the fib seq
	int fib1=0, fib2=1, sum_fib=0;
	for(; fib2<end_goal; ){
		int tmp=fib1;
		fib1 =fib2;
		fib2+=tmp ;
		if(fib2%2==0){
			sum_fib+=fib2;
        	}
	}
	return sum_fib;
}

int main(){
	int up_lim=0, rec=0, itr=0;
	cout << "Enter the upper limit." << endl;
	cin>>up_lim;
	itr=get_fib_sum_iter(up_lim);
	rec=get_fib_sum_rec (up_lim, 1, 0);
	cout << "Sum of even fib numbers iterative " << up_lim << " is " << itr << '.' << endl;
	cout << "Sum of even fib numbers recursive " << up_lim << " is " << rec << '.' << endl;
	return 0;
}
