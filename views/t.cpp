#include <bits/stdc++.h>
using namespace std; 

//function definition
int minxor(int matrix[], int length){
	int answer=999999,obtainedxor=0;
	for(int i=0;i<length;++i){
		obtainedxor= (obtainedxor & matrix[i]);
	}
	
	int cost;
	for(int i=0;i<length;++i){
		cost=abs((obtainedxor &  matrix[i])-matrix[i]);
		if(answer>cost){
			answer=cost;
		}
	}
	return answer;
}

int main(){
	//input
	int n;
	cin>>n;
	int matrix[n];
	for(int i=0;i<n;++i){
		cin>>matrix[i];
	}
	int res= minxor(matrix, n);
	cout<<res<<endl;
	return 0;
}
