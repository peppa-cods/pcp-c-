#include <iostream>

using namespace std;
const int n = 6;
int arr1[n] = {5,3,6,2,7,1};
int arr2[n];
int main(){
	arr2[0] = arr1[0];
	for (int i = 0; i < n; i++) {
	if(arr1[i] > arr2[i-1]){
		arr2[i] = arr1[i];
	} else{
		arr2[i] = arr2[i-1];
	}
}
for (int j=0; j<n; j++){
	cout << arr2[j] << " ";
}

}

