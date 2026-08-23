class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        unordered_map<string, int> count;

        int n = s.size();
        int w = words[0].size();
        int totalWords = words.size();
        int totalLen = w * totalWords;

        vector<int> result;

        for(string word : words) {
            count[word]++;
        }

        // Try each possible offset
        for(int offset = 0; offset < w; offset++) {

            int l = offset;
            int r = offset;

            unordered_map<string, int> temp;
            int wordCount = 0;

            while(r + w <= n) {

                string word = s.substr(r, w);
                r += w;

                // Word doesn't exist in words
                if(count.find(word) == count.end()) {

                    temp.clear();
                    wordCount = 0;
                    l = r;

                    continue;
                }

                temp[word]++;
                wordCount++;

                // Too many occurrences of this word
                while(temp[word] > count[word]) {

                    string leftWord = s.substr(l, w);

                    temp[leftWord]--;
                    wordCount--;
                    l += w;
                }

                // Correct number of words
                if(wordCount == totalWords) {

                    result.push_back(l);

                    // Move left by one word
                    string leftWord = s.substr(l, w);

                    temp[leftWord]--;
                    wordCount--;
                    l += w;
                }
            }
        }

        return result;
    }
};