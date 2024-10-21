/*
Q. Inorder Traversal and BST

Given an array arr of size N, determine whether this array represents an inorder traversal of a BST. 

Note: All keys in BST must be unique.

Example 1:

Input:
N = 3
arr = {2, 4, 5}
Output: 1
Explaination: 
Given array is inorder traversal for the following tree:
    4
   / \
  2   5

Example 2:

Input:
N = 3
arr = {2, 4, 1}
Output: 0
Explaination: 
Given array can not represent any BST.

Your Task:
You don't need to read input or print anything. Your task is to complete the function isRepresentingBST() which takes the array arr[] and its size N as input parameters and returns 1 if array represents Inorder traversal of a BST, else returns 0.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105
1 ≤ arr[i] ≤ 105
*/

#include<iostream>
#include<vector>
using namespace std;

int isRepresentingBST(vector<int> &arr){
    
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){

    int n;
    cin >> n;

    int BOSSDK = 0;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> BOSSDK;
        arr.push_back(BOSSDK);
    }

    int ans = isRepresentingBST(arr);
    cout << ans;

    return 0;
}