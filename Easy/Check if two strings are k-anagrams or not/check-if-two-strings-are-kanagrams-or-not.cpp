//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string s, string t, int k) {
        // code here
        if(s.length() != t.length()){
            return false;
        }
        int arr[26] = {0};
        for(int i = 0; i < s.length(); ++i)
        {
            ++arr[s.at(i) - 'a'];
            --arr[t.at(i) - 'a'];
        }
        int ans = 0;
        for(auto x : arr){
            ans += abs(x);
        }
        ans/=2;
        if(ans <= k)
            return true;
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends