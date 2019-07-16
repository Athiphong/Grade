#include <iostream>
#include <string>
using namespace std;
void main(){
	int score;
	cout << " Enter score : ";
	cin  >> score;

	if(score >= 80){
		cout << " Grade A " << endl;
	}

	else if(score >= 70){
		cout << " Grade B " << endl;
	}

	else if(score >= 60){
		cout << " Grade C " << endl;
	}

	else if(score >= 50){
		cout << " Grade D " << endl;
	}

	else{
		cout << " Grade F " << endl;
	}
}