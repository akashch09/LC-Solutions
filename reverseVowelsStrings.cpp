class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "";
        for(char c : s) {
            if(isVowel(c)) {
                vowels += c;
            }
        }
        reverse(vowels.begin(), vowels.end());
        int index = 0; 
        for(int i = 0; i < s.length(); i++) {
            if(isVowel(s[i])) {
                s[i] = vowels[index];
                index++;
            }
        }
        
        return s;
    }
    
private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};