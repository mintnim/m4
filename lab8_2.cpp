#include<iostream>
using namespace std;

void printO(int M ,int N){
	string output;
	int i = 0;
	int u = 0;
	if(M > 0 and N > 0){
	while(i < N){
			output += "O";
			i++;
	}
	while(u < M){
		
	    cout << output << "\n";
	    u++;
}
}
else{
 cout << "Invalid input";   
}
}

