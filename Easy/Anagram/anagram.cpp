//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t){
        
        // Your code here
          int arr[26] = {0};
        for(int i = 0; i < s.length(); ++i)
        {
            ++arr[s.at(i) - 'a'];
        }
        for(int i = 0; i < t.length(); ++i)
        {
            --arr[t.at(i) - 'a'];
        }
        for(auto x : arr){
            if(x!= 0)
                return 0;
        }
    return 1;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends