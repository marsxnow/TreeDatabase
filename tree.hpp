#ifndef TREE
#define TREE

using namespace std;
template <typename T>

class Node{
    public:
        //Node() : value_(T()), left_(nullptr), right_(nullptr) {}
        Node(){
            this->value_ = T();
            this->left_ = nullptr;
            this->right_ = nullptr;
        }
        
        //Node(const T& value, Node* left = nullptr, Node* right = nullptr): value_(data), left_(left), right_(right) {}
        Node(const T& value, Node* left = nullptr, Node* right = nullptr){
            this->value_ = value;
            this->left_ = left;
            this->right_ = right;
        }
    void setValue(T value)const{
        this->value_ value;
    }
    T getValue()const{
        return this->value_;
    }
    void setLeft(Node* Node){
        this->left_ = Node;
        //return this->left_;
    }
    Node* getLeft(){
        cout<<(this->left_->getValue());
        return this->left_;
    } 

    private:
        T value_;
        Node* left_;
        Node* right_;
        Node* parent_;

};

#endif