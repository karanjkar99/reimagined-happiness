int freq[26];
        for (int i =0; i<26; i++)
        {
            freq[i]=0;
        }
        for (int i=0; i< str.size(); i++)
        {
            freq[str[i]-'a']++;
        }
        int maxF = 0;
        char ans;
        for (int i =0; i<26; i++)
        {
            if (freq[i]> maxF)
            {
                maxF = freq[i];
                ans = i+'a';
            }
        }
        return ans;
