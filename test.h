#include <iostream>
using namespace std;

	int add(int, int);
	int sub(int, int);
	int mul(int, int);

class Collatz{

private: 
	long long colNum;
	int count;	
public: 
	Collatz(){}
	Collatz(int colNum){
		this->colNum = colNum;
		calculate();
		cout << getCount() << '\n';
	}

	int getCount(){
		return count;
	}

	void setColNum(long long colNum){
		this->colNum = colNum;
	}

	void even(){
		colNum /= 2;
	}
	
	void odd(){
		colNum = (colNum * 3) + 1;
	}

	void calculate(){
		while(colNum != 1){
			++count;        
			if(colNum % 2 == 0)
				even();
			else
				odd();
		}
	}
};

