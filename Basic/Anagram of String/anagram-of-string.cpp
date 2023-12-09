//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s, string t)
{
// Your code goes here
        int arr[26] = {0};
        for(int i = 0; i < s.length(); ++i)
        {
            ++arr[s.at(i) - 'a'];
        }
        for(int i = 0; i < t.length(); ++i)
        {
            --arr[t.at(i) - 'a'];
        }
        int ans = 0;
        for(auto x : arr){
            ans += abs(x);
        }
    return ans;
}