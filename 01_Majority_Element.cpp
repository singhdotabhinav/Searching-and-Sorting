//Write a function which takes an array and prints the majority element (if it exists), otherwise prints “No Majority Element”.
//A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
//Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
//Output : 4
//Explanation: The frequency of 4 is 5 which is greater
//than the half of the size of the array size. 

//Input : {3, 3, 4, 2, 4, 4, 2, 4}
//Output : No Majority Element
//Explanation: There is no element whose frequency is
//greater than the half of the size of the array size.  



//Brute Force
//Time O(n^2)
//Space O(1)
#include <bits/stdc++.h>
using namespace std;

int findCandidate(int arr[], int n){


    int count=0;
    int maxcount=-INT_MAX;
    int index=-1;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;

            if(count>maxcount){
                maxcount=count;
                index=i;
            }


        }

    }

    if(maxcount>n/2)
        return arr[index];


    return -1;


}
int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    cout<<findCandidate(arr,n);

    return 0;
}



