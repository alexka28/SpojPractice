    #include <iostream>
    #include <string>
    #include <map>
    #include <stack>
    #include <list>
    using namespace std;
     
	// https://www.spoj.com/problems/ONP/ 
	 
    bool isOperator(char token) {
    	return token == '+' || token == '-' || token == '*' || token == '/' || token == '^';
    }
     
    bool isLeftParenthesis(char token) {
    	return token == '(';
    }
     
    bool isRightParentHesis(char token) {
    	return token == ')';
    }
    void convertToRPN(const string& expression) {
    	list<char> rpn;
    	stack<char> subExpression;
    	map<char, int> precedence;
    	precedence['('] = -1;
    	precedence['+'] = 0;
    	precedence['-'] = 0;
    	precedence['*'] = 1;
    	precedence['/'] = 1;
    	precedence['^'] = 1;
     
    	for (auto it = expression.begin(); it != expression.end(); ++it) {
     
    		if (isLeftParenthesis(*it)) {
    			subExpression.push(*it);
    			continue;
    		}
    		else if (isRightParentHesis(*it)) {
    			auto lastElem = subExpression.top();
    			while (!isLeftParenthesis(lastElem)) {
    				rpn.push_back(lastElem);
    				subExpression.pop();
    				lastElem = subExpression.top();
    			}
    			subExpression.pop();
    		}
    		else if (isOperator(*it)) {
     
    			while (!subExpression.empty() && precedence[subExpression.top()] >= precedence[*it]) {
    				rpn.push_back(subExpression.top());
    				subExpression.pop();
    			}
    			subExpression.push(*it);
    		}
    		else {
    			rpn.push_back(*it);
    		}
    	}
    	while (!subExpression.empty()) {
    		rpn.push_back(subExpression.top());
    		subExpression.pop();
    	}
     
    	for (auto it = rpn.begin(); it != rpn.end(); ++it) {
    		cout << *it;
    	}
    	cout << endl;
     
    }
     
     
    int main()
    {
    	int testCases, currentTestCase = 1;
     
    	cin >> testCases;
    	cin.ignore();
    	while (currentTestCase <= testCases) {
    		string expression;
    		getline(cin, expression);
    		convertToRPN(expression);
    		++currentTestCase;
    	}
     
    } 