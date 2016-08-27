/*
You are given an array A of size N, and Q queries to deal with. 
For each query, you are given an integer X, and you're supposed to find out if X is present in the array A or not.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool binarySearch(vector<int> arr, int left, int right, int element){
	if(left <= right){
		int middle = left + (right - left)/2;
		if(arr[middle] == element){
			return true;
		}else{
			if(arr[middle] > element){
				return binarySearch(arr, left, middle-1, element);
			}
			if(arr[middle] < element){
				return binarySearch(arr, middle+1, right, element);	
			}
		}		
	}else{
		return false;	
	}
}

int main()
{
	int size;
	int no_elements, element, arr_ele;
	vector<int> ele;
	cin >> size;
	cin >> no_elements;
	while(size > 0){
		cin >> arr_ele;
		ele.push_back(arr_ele);
		size--;
	}
	while(no_elements > 0){
		cin >> element;
		if(binarySearch(ele, 0, ele.size()-1, element)){
			cout << "YES" << "\n";
		}else{
			cout << "NO" << "\n";
		}
		no_elements--;
	}
    return 0;
}
