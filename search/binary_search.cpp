#include <bits/stdc++.h>

using namespace std;

bool binarySearch(vector<int> A, int left, int right, int item)  {
    if (left <= right) 
    {
        int mid = left + (right - left)/2;
        if (A[mid] == item)
            return true;
        else if (item < A[mid])
        {
            return binarySearch(A, left, mid-1, item);        
        }
        else
        {
             return binarySearch(A, mid+1, right, item);     
        }
   }
   else
        return false;
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
  if(binarySearch(arr_e, 0, arr_e.size()-1, element)){
    cout << "Element Found" << "\n";
  }
}
