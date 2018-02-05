#include <iostream>
using namespace std;
int re(int x){
	if(x==0 || x%2 != 0){
		return 0;
	}
	if(x == 1){
		return 1;
	}
	if(x == 2){
		return 2;
	}
	else{

				return 2+re(x/2);
			}



}
int main() {

	int in;
	cin >> in;
cout << re(in);
	return 0;
}
