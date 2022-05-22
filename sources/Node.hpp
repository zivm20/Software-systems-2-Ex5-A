#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>




namespace ariel{
class Node{
    private:
        std::string value;
        std::vector<Node> children;
    public:
        Node(const std::string& v);
    
        inline std::string getValue() const{
            return this->value;
        }
        inline void setValue(std::string s){
            this->value = s;
        }
        inline std::vector<Node> getChildren() const{
            return this->children;
        }
        inline void addChild(Node& n){
            this->children.push_back(n);
        }
        inline bool operator==(const Node& node2){
            return this->value == node2.getValue() && this->children == node2.getChildren();
        }
        inline bool operator!=(const Node& node2){
            return !((*this)==node2);
        }
        inline size_t size(){
            return value.size();
        }

        friend std::ostream& operator<<(std::ostream& output, const Node& node);


};


}