class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<string>s;
       sort(words.begin(),words.end());
       for(char c:words[0]){
        bool com = true;

        for(int i=1;i<words.size();i++){
            if(words[i].find(c)==string::npos){
                com=false;
                break;
            }else{
                words[i].erase(words[i].find(c),1);
            }
        }
        if(com){
            s.push_back(string(1,c));
        }
       } 
       return s;
    }
};