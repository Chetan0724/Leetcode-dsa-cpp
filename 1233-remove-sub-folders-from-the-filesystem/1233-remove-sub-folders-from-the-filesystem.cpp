class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans;
        ans.push_back(folder[0]);
        for (int i = 1; i < folder.size(); i++) {
            string lastFolderAdded = ans.back();
            int sizeofLastFolderAdded = lastFolderAdded.size();
            if (folder[i].substr(0, sizeofLastFolderAdded) == lastFolderAdded &&
                folder[i][sizeofLastFolderAdded] == '/') {
                continue;
            }
            ans.push_back(folder[i]);
        }
        return ans;
    }
};