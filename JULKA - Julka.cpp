    #include <iostream>
    #include <string>
    #include <boost/multiprecision/cpp_int.hpp> 
     
    using namespace boost::multiprecision;
     
    using namespace std;
     
     // https://www.spoj.com/problems/JULKA/
     
     
    int main()
    {
    	int currentTestCase = 1;
     
     
    	while (currentTestCase <= 10) {
    		int1024_t all, diff;
    		cin >> all;
    		cin >> diff;
    		int1024_t N, K;
    		if(all == diff){
    			K = all;
    			N = 0;
    		}
    		else if(all % 2 != 0) {
    			K = all / 2 + diff / 2 + 1;
    			N = all - K;
    			if (N > K) {
    				swap(K, N);
    			}
    		}
    		else{
    			K = all / 2 + diff / 2;
    			N = all - K;	
    			if (N > K) {
    				swap(K, N);
    			}	
    		}
    		
    		
     
     
    		cout << K << endl;
    		cout << N << endl;
     
    		++currentTestCase;
    	}
    	
    } 