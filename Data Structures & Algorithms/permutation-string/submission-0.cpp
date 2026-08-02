class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m){
            return false;
        }
        vector<int>a(256,0);
        vector<int>b(256,0);
        for(int i=0;i<n;i++){
            a[s1[i]]++;
            b[s2[i]]++;
        }
        if(a==b){
            return true;
        }
        for(int i=n;i<m;i++){
            //if(a==b)
            b[s2[i]]++;
            b[s2[i-n]]--;
            if(a==b){
                return true;
            }
            
        }
        return false;
    }
};
