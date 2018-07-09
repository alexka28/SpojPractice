#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int testcases;
std::cin>>testcases;
int w,l,h,water,numStones;
int countStones;
for(int i = 1; i <= testcases; ++i){
        countStones = 0;
    cin >> w >> l >> h >> water;
    cin >> numStones;
    int stones[numStones];
    for(int j = 0; j < numStones; ++j){
        cin>>stones[j];
    }
    sort(stones, stones+numStones);

    while(water <= h){
            --numStones;
       water += stones[numStones];

       ++countStones;

    }
    cout<<countStones<<endl;

}

return 0;}
