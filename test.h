#include <iostream>
using namespace std;

	int add(int, int);
	int sub(int, int);
	int mul(int, int);

class Collatz{

private: 
	long long colNum;
	
public: 
	Collatz(){}
	Collatz(int colNum){
		this->colNum = colNum;
		calculate();
		cout << getColNum() << '\n';
	}

	long long getColNum(){
		return colNum;
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
			if(colNum % 2 == 0)
				even();
			else
				odd();
		        
		}
	}
};

