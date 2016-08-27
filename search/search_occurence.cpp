#include <bits/stdc++.h>

using namespace std;

int firstOccurrence(vector<int> A, int left, int right, int item) {
    int mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (A[mid] >= item) 
            right = mid;
        else
            left = mid;
    }
    return right;
}

int lastOccurrence(vector<int> A, int left, int right, int item) {
    int mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (A[mid] <= item)
            left = mid;
        else
            right = mid;
    }
    return left;
}

int numberOfOccurrences(vector<int> A, int size, int item) {
    int left = firstOccurrence(A, -1, size - 1, item);
    int right = lastOccurrence(A, 0, size, item);
    if (A[left] == item && A[right] == item)
        return (right - left + 1);
    else                                          
        return 0;
}

int main(){
  //int arr[5] = {3, 4, 6, 1, 5};
  vector<int> arr_e;
  arr_e.push_back(3);
  arr_e.push_back(4);
  arr_e.push_back(6);
  arr_e.push_back(1);
  arr_e.push_back(0);
  arr_e.push_back(3);
  int element = 3;
  sort(arr_e.begin(), arr_e.end());
  cout << numberOfOccurrences(arr_e, arr_e.size(), element) << endl;
}
