class Solution {
public:
    vector<int> decodeXOR(vector<int>& encoded, int first) {
        vector<int>  v;
        int i;
        v1.push_back(first);
        for (i=0;i<encoded.size();i++){
            v1.push_back(v[i]^encoded[i]);
        }
        return v1;
    }
};
