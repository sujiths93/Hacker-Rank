class Solution {
public:
    string countAndSay(int n) {
        
        if(n==1)
        return "1";
        int j;
        string s="1";
        string temp="";
        unordered_map<char,int> dict;
        for(int i=1;i<n;i++){
            for(j=1;j<s.length();++j){
                
                else if(dict.find(s[j])==dict.end()){
                    temp+=to_string(dict[s[j-1]]);
                    temp+=s[j-1];
                    dict.clear();
                    dict[s[j]]=1;
                }    
                else
                    dict[s[j]]+=1;
            }
                
                temp+=to_string(dict[s[j-1]]);
                temp+=s[j-1];
                dict.clear();
                s=temp;
                temp="";
        }
        
        return s;
    }
};