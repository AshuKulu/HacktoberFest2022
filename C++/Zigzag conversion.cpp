class Solution {
public:
    string convert(string s, int rows) {
        if(rows<=1) return s;
        
        int n = s.size();
        string output = "";
        
        for(int i=0; i<rows; i++)
            for(int j=i; j<n; j+=(2*(rows-1))) {
                output += s[j];
                if(i>0 && i<rows-1 && (j+2*(rows-1-i)<n))
                    output += s[j+2*(rows-1-i)];
            }
        return output;
    }
};
