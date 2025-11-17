class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
         // Convert banned list into a set
        unordered_set<string> bannedSet;
        for (string &b : banned) {
            bannedSet.insert(b);
        }

        unordered_map<string, int> countMap;
        string answer = "";
        int maxCount = 0;

        string currentWord = "";

        for (int i = 0; i < paragraph.size(); i++) {
            char ch = paragraph[i];

            // If letter → add to current word (in lowercase)
            if (isalpha(ch)) {
                currentWord += tolower(ch);
                continue;
            }

            // If non-letter → process the current word
            if (!currentWord.empty()) {
                if (bannedSet.find(currentWord) == bannedSet.end()) {
                    countMap[currentWord]++;
                    if (countMap[currentWord] > maxCount) {
                        maxCount = countMap[currentWord];
                        answer = currentWord;
                    }
                }
                currentWord = ""; // reset for next word
            }
        }

        // Handle last word if paragraph ends with a letter
        if (!currentWord.empty()) {
            if (bannedSet.find(currentWord) == bannedSet.end()) {
                countMap[currentWord]++;
                if (countMap[currentWord] > maxCount) {
                    maxCount = countMap[currentWord];
                    answer = currentWord;
                }
            }
        }

        return answer;
    }
};