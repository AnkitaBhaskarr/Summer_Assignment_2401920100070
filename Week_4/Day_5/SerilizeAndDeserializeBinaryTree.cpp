class Codec {
public:

    string serialize(TreeNode* root) {
        if (!root)
            return "#,";

        return to_string(root->val) + "," +
               serialize(root->left) +
               serialize(root->right);
    }

    TreeNode* deserializeHelper(stringstream &ss) {
        string val;
        getline(ss, val, ',');

        if (val == "#")
            return NULL;

        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(ss);
        root->right = deserializeHelper(ss);

        return root;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializeHelper(ss);
    }
};
