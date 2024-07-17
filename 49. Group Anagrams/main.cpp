class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> result_map;

        for (auto &str : strs)
        {
            string key = getKey(str);
            result_map[key].push_back(str);
        }

        vector<vector<string>> result_vec;
        for (auto result_item : result_map)
        {
            result_vec.push_back(result_item.second);
        }

        return result_vec;
    }

private:
    string getKey(string str)
    {
        vector<int> chars_num(26);

        for (auto character : str)
        {
            chars_num[character - 'a']++;
        }

        string result;
        for (auto &char_num : chars_num)
        {
            result.append(to_string(char_num + 10));
        }
        return result;
    }
};