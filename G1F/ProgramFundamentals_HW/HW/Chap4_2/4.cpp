#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int x) : val(x), left(nullptr), right(nullptr) {};
};

void insert(Node*& root, int val) {
    if (root == nullptr) {
        root = new Node(val);
        return;
    }
    
    if (val < root->val) {
        insert(root->left, val);
    }
    else {
        insert(root->right, val);
    }
}

void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->val << ' ';
    inorder(root->right);
}

void destroy(Node* root) {
    if (root == nullptr)
        return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main(void) {
    Node* root = nullptr;
    int init_data[] = {23, 35, 110, 145, 207};
    for (const auto& i : init_data) {
        insert(root, i);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int n;
        cin >> n;
        insert(root, n);
    }
    inorder(root);
    destroy(root);
    return 0;
}