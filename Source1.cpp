// Computing Structures Fall 2022
// Project 5
//Bhavya Reddy Kanuganti
/*#include <iostream>
#include <stack>
#include <vector>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////
/////
// Class ArrayBTNode
///////////////////////////////////////////////////////////////////////////////////
/////
template <class DT>
class ArrayBTNode
{
protected:
    // Instance Variables
    DT* _info;
    int _left;
    int _right;
public:
    // Constructors and Destructor
    ArrayBTNode();
    ArrayBTNode(DT& info);
    ~ArrayBTNode();
    // getter Methods
    DT* getinfo();
    int getleft();
    int getright();
    // setter Methods
    void setInfo(DT& info);
    void setInfoNull(); // Sets _info to Null
    void setLeft(int left);
    void setRight(int right);
    // Display Method
    // Outputs data in _info, _left, _right
    void display();
    // Overloaded Comparison Operators
    // Used for comparing _info field with other ArrayBTNodes
    bool operator<(const ArrayBTNode<DT>& x);
    bool operator>(const ArrayBTNode<DT>& x);
    bool operator==(const ArrayBTNode<DT>& x);
    bool operator>=(const ArrayBTNode<DT>& x);
    bool operator<=(const ArrayBTNode<DT>& x);
    bool operator!=(const ArrayBTNode<DT>& x);
    // TODO: Overloaded Ostream Operator - Uses display method to output ArrayBTNode contents
};
template <class DT>
ArrayBTNode<DT>::ArrayBTNode()
{
    _info = new DT();
    _right = 0;
    _left = 0;
}
template <class DT>
ArrayBTNode<DT>::ArrayBTNode(DT& info)
{
    _info = new DT(info);
}
template <class DT>
ArrayBTNode<DT>::~ArrayBTNode()
{
    if (_info != NULL)
        delete _info;
    _info = NULL;
    _right = 0;
    _left = 0;
}
template <class DT>
DT* ArrayBTNode<DT>::getinfo()
{
    return _info;
}
template <class DT>
int ArrayBTNode<DT>::getleft()
{
    return _left;
}
template <class DT>
int ArrayBTNode<DT>::getright()
{
    return _right;
}
template <class DT>
void ArrayBTNode<DT>::setInfo(DT& info)
{
    _info = new DT(info);
}
template <class DT>
void ArrayBTNode<DT>::setInfoNull() // Sets _info to Null
{
    _info = NULL;
}
template <class DT>
void ArrayBTNode<DT>::setLeft(int left)
{
    _left = left;
}
template <class DT>
void ArrayBTNode<DT>::setRight(int right)
{
    _right = right;
}
template <class DT>
void ArrayBTNode<DT>::display()
{
}
///////////////////////////////////////////////////////////////////////////////////
/////
// Class ArrayBST
///////////////////////////////////////////////////////////////////////////////////
/////
template <class DT>
class ArrayBST
{
protected:
    // Instance Variables
    vector<ArrayBTNode<DT> > _tree;    // Vector of ArrayBTNodes used to create a tree
    int _rootIndex;            // Index of the root node in _tree
    int _numNodes;             // Number of nodes in the tree
    int _size;                 // Maximum size of the _tree array
    stack<int> _freeLocations; // Stack containing indexes of freeLocations in the _tree array
public:
    // Constructors and Destructor
    ArrayBST();
    ArrayBST(int k); // initialize the vector with NULL nodes and fill the stack
    ~ArrayBST();
    // Accessor Methods
    bool isEmpty() const;
    int Height();
    int Size();
    int rootIndex();
    int maxSize();
    // Mutator Methods
    void setData(int index, DT& value);
    void setLeft(int index, int value);
    void setRight(int index, int value);
    // Display methods and traversals
    void display(ostream& os) const;
    void displayPreOrder(ostream& os) const;
    void displayInOrder(ostream& os) const;
    void printRaw(); // Display the array and all of its contents
    // BST Specific Methods
    void insert(DT& object);
    bool find(DT& object);
    int findIndex(DT& object);
    void remove(DT& object); // extra credit
    // TODO: Overridden ostream operator for ArrayBST - this will call the pre orderand in order methods
};
template <class DT>
ArrayBST<DT>::ArrayBST()
{
    _tree = NULL;
    _rootIndex = 0;
    _numNodes = 0;
    _size = 0;
    _freeLocations = NULL;
}
template <class DT>
ArrayBST<DT>::ArrayBST(int k)
{
    //TODO
}
template <class DT>
ArrayBST<DT>::~ArrayBST()
{
    _tree[0];
    _rootIndex = 0;
    _numNodes = 0;
    _size = 0;
//     _freeLocations=0;
}
template <class DT>
bool ArrayBST<DT>::isEmpty() const
{
    return _rootIndex->getInfo() == NULL;
}
template <class DT>
int ArrayBST<DT>::Height()
{

}
template <class DT>
int ArrayBST<DT>::Size()
{

}
template <class DT>
int ArrayBST<DT>::rootIndex()
{

}
template <class DT>
int ArrayBST<DT>::maxSize()
{

}
// Mutator Methods
template <class DT>
void ArrayBST<DT>::setData(int index, DT& value)
{

}
template <class DT>
void ArrayBST<DT>::setLeft(int index, int value)
{

}
template <class DT>
void ArrayBST<DT>::setRight(int index, int value)
{

}
// Display methods and traversals
template <class DT>
void ArrayBST<DT>::display(ostream& os) const
{

}
template <class DT>
void ArrayBST<DT>::displayPreOrder(ostream& os) const
{

}
template <class DT>
void ArrayBST<DT>::displayInOrder(ostream& os) const
{

}
template <class DT>
void ArrayBST<DT>::printRaw() // Display the array and all of its contents
{

}
// BST Specific Methods
template <class DT>
void ArrayBST<DT>::insert(DT& object)
{

}
template <class DT>
bool ArrayBST<DT>::find(DT& object)
{

}
template <class DT>
int ArrayBST<DT>::findIndex(DT& object)
{

}
template <class DT>
void ArrayBST<DT>::remove(DT& object)
{

}
///////////////////////////////////////////////////////////////////////////////////
/////
// Main Method
///////////////////////////////////////////////////////////////////////////////////
/////
int main()
{
    // Get input for the size of the tree
    int inputSize;
    cin >> inputSize;
    char command;
    // Create a BST of the size inputSize
    ArrayBST<int> myBST = ArrayBST<int>(inputSize);
    // TODO: input loop for commands
    while (cin >> command)
    {
        switch (command)
        {
        case 'I':
        {
            break;
        }
        case 'R':
        {
            break;
        }
        case 'F':
        {
            break;
        }
        case 'O':
        {
            break;
        }
        case 'A':
        {
            break;
        }
        default:
        {
            cout << "Command not recognized" << endl;//default case
            break;
        }
        }
        cout << endl;
    }
    return 0;
}*/
// Computing Structures Fall 2022
// Project 5

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////
// Class ArrayBTNode
////////////////////////////////////////////////////////////////////////////////////////

template <class DT>
class ArrayBTNode {
protected:
    // Instance Variables
    DT* _info;
    int _left;
    int _right;

public:
    // Constructors and Destructor
    ArrayBTNode();
    ArrayBTNode(DT& info);
    ~ArrayBTNode();

    // getter Methods
    DT* getinfo();
    int getleft();
    int getright();

    // setter Methods
    void setInfo(DT& info);
    void setInfoNull(); // Sets _info to Null
    void setLeft(int left);
    void setRight(int right);

    // Display Method
    // Outputs data in _info, _left, _right
    void display();

    // Overloaded Comparison Operators
    // Used for comparing _info field with other ArrayBTNodes
    bool operator<(const ArrayBTNode<DT>& x);
    bool operator>(const ArrayBTNode<DT>& x);
    bool operator==(const ArrayBTNode<DT>& x);
    bool operator>=(const ArrayBTNode<DT>& x);
    bool operator<=(const ArrayBTNode<DT>& x);
    bool operator!=(const ArrayBTNode<DT>& x);

    // TODO: Overloaded Ostream Operator - Uses display method to output ArrayBTNode contents
    friend ostream& operator << (ostream& ostr, ArrayBTNode& node) {
        node.display();
        return ostr;
    };
};

//ArrayBTNode Constructor
template <class DT>
ArrayBTNode<DT>::ArrayBTNode() {};
template <class DT>
ArrayBTNode<DT>::ArrayBTNode(DT& info) {
    _info = &info;
    _left = -1;
    _right = -1;
};

//Desctructor
template <class DT>
ArrayBTNode<DT>::~ArrayBTNode() {
}

//Getter Methods
//Returns info pointer
template <class DT>
DT* ArrayBTNode<DT>::getinfo() {
    return _info;
};

//Returns left child of node index
template <class DT>
int ArrayBTNode<DT>::getleft() {
    return _left;
};

//Returns right child of node index
template <class DT>
int ArrayBTNode<DT>::getright() {
    return _right;
};

//Setter Nodes
//Set the value of _info
template <class DT>
void ArrayBTNode<DT>::setInfo(DT& info) {
    _info = &info;
};

// Sets _info to Null
template <class DT>
void ArrayBTNode<DT>::setInfoNull() {
    int* nullp = NULL;
    _info = nullp;
};

//Sets the value of left child node index
template <class DT>
void ArrayBTNode<DT>::setLeft(int left) {
    _left = left;
};
//Sets the value of right child node index
template <class DT>
void ArrayBTNode<DT>::setRight(int right) {
    _right = right;
};

// Outputs data in _info, _left, _right
template <class DT>
void ArrayBTNode<DT>::display() {
    cout << "Info: " << *_info << ", "
        << "Left: " << _left << ", "
        << "Right: " << _right;
};

// Overloaded Comparison Operators
//Below Comparisions are made on Info
//return result for Less than (<) operator comparision between two nodes
template <class DT>
bool ArrayBTNode<DT>::operator<(const ArrayBTNode<DT>& x) {
    return (*_info < *x._info);
};

//return result for greater than (>) operator comparision between two nodes
template <class DT>
bool ArrayBTNode<DT>::operator>(const ArrayBTNode<DT>& x) {
    return (*_info > *x._info);
};

//return result for Equal (==) operator comparision between two nodes
template <class DT>
bool ArrayBTNode<DT>::operator==(const ArrayBTNode<DT>& x) {
    return (*_info == *x._info);
};

//return result for Greater than or Equal (>=) operator comparision between two nodes
template <class DT>
bool ArrayBTNode<DT>::operator>=(const ArrayBTNode<DT>& x) {
    return (*_info >= *x._info);
};

//return result for Less than or Equal (<=) operator comparision between two nodes
template <class DT>
bool ArrayBTNode<DT>::operator<=(const ArrayBTNode<DT>& x) {
    return (*_info <= *x._info);
};

//return result for Not Equal (!=) operator comparision between two nodes
template <class DT>
bool ArrayBTNode<DT>::operator!=(const ArrayBTNode<DT>& x) {
    return (*_info != *x._info);
};


////////////////////////////////////////////////////////////////////////////////////////
// Class ArrayBST
////////////////////////////////////////////////////////////////////////////////////////

template <class DT>
class ArrayBST {
protected:
    // Instance Variables
    vector<ArrayBTNode<DT> > _tree;    // Vector of ArrayBTNodes used to create a tree
    int _rootIndex;            // Index of the root node in _tree
    int _numNodes;             // Number of nodes in the tree
    int _size;                 // Maximum size of the _tree array
    stack<int> _freeLocations; // Stack containing indexes of freeLocations in the _tree array

public:
    // Constructors and Destructor
    ArrayBST();
    ArrayBST(int k); // initialize the vector with NULL nodes and fill the stack
    ~ArrayBST();

    // Accessor Methods
    bool isEmpty() const;
    int Height();
    int Size();
    int rootIndex();
    int maxSize();

    // Mutator Methods
    void setData(int index, DT& value);
    void setLeft(int index, int value);
    void setRight(int index, int value);

    // Display methods and traversals
    void display(ostream& os) const;
    void displayPreOrder(ostream& os) const;
    void displayInOrder(ostream& os) const;
    void printRaw(); // Display the array and all of its contents

    // BST Specific Methods
    void insert(DT& object);
    bool find(DT& object);
    int findIndex(DT& object);
    void remove(DT& object); // extra credit

    // TODO: Overridden ostream operator for ArrayBST - this will call the pre order and in order methods
    friend ostream& operator << (ostream& output, ArrayBST& bst) {
        bst.display(output);
        return output;
    }

    //Custom Methods for Implementation
    void Initialize(); //Initializes the BST with NULL Nodes && FreeLocation Stack
    void preOrder(ArrayBTNode<int> node, ostream& os) const; //Traverse the BST Pre Order to print nodes
    void inOrder(ArrayBTNode<int> node, ostream& os) const; //Traverse the BST In Order to print nodes

    int getParentIndex(int newIndex, int traverseIndex); //Gets the suitable Parent node for Newly Inserted node in BST
    int traverseFind(int traverseIndex, DT& object); //Traverse the BST to find Node
    vector<int> getLeftTree(vector<int> leftTree, int beginIndex, int traverseIndex);
    void replaceImmediate(int removeIndex, int replaceIndex, bool isRight);
    bool removeIndexFromParent(int indexToRemove, int traverseIndex);
    void rawNodes(); //Prints Raw Nodes
    void freeIndexes(); //Prints Free Indexes
};

// Constructor
template <class DT>
ArrayBST<DT>::ArrayBST(int k) {
    _size = k;
    Initialize(); //It Initialized Stack and Tree with Empty Locations and Null Nodes respectively 
}

//Destructor
template <class DT>
ArrayBST<DT>::~ArrayBST() {

}

// Initializes BST with NULL Nodes && FreeLocation Stack
template <class DT>
void ArrayBST<DT>::Initialize() {
    int i = 0;
    int* nullInfo = NULL; //a null value pointer for NULL nodes for initialization
    ArrayBTNode<int> n = ArrayBTNode<int>(*nullInfo); //NULL Node
    while (i < _size) {//Loop for maxSize
        _tree.push_back(n); //Null Node Pushed to Index i
        _freeLocations.push(i);//i kept as free location
        i++;
    }
    _rootIndex = (i - 1); //set root index
    _numNodes = 0; //Initially Nodes are Zero
}

////////////////////////////////////////////////////////////////////////////////////////
// Mutator Methods
////////////////////////////////////////////////////////////////////////////////////////

// Sets the info of node at given index
template <class DT>
void ArrayBST<DT>::setData(int index, DT& value) {
    _tree[index].setInfo(value);
}
// Sets the _left index of node at given index
template <class DT>
void ArrayBST<DT>::setLeft(int index, int value) {
    _tree[index].setLeft(value);
};
// Sets the _right index of node at given index
template <class DT>
void ArrayBST<DT>::setRight(int index, int value) {
    _tree[index].setRight(value);
};

////////////////////////////////////////////////////////////////////////////////////////
// Accessor Methods
////////////////////////////////////////////////////////////////////////////////////////

// Return Wether tree is empty
template <class DT>
bool ArrayBST<DT>::isEmpty() const {
    return (_tree.size() == 0);
}
//Returns tree's current Size 
template <class DT>
int ArrayBST<DT>::Size() {
    return _numNodes;
};
//Returns tree's root index
template <class DT>
int ArrayBST<DT>::rootIndex() {
    return _rootIndex;
};
//Returns tree's max Size
template <class DT>
int ArrayBST<DT>::maxSize() {
    return _size;
};

////////////////////////////////////////////////////////////////////////////////////////
// Insertion Methods
////////////////////////////////////////////////////////////////////////////////////////

// BST Specific Methods
template <class DT>
void ArrayBST<DT>::insert(DT& object) {
    cout << endl << "Inserting " << object << endl;
    if (_freeLocations.size() == 0) { //Check if there is any free location to add new node
        cout << "Cannot insert data, BST Full." << endl;
    }
    else { //Insert when there is free locations
        //start from root node and if value is less the traverse the left tree else right and insert at its perfect location
        if (_freeLocations.size() == maxSize()) { //This will be a root node
            setData(_freeLocations.top(), object); //Set the data on the node.
        }
        else { //Adding Child Node
            setData(_freeLocations.top(), object);//Sets the data first
            int parentIndex = getParentIndex(_freeLocations.top(), _rootIndex); //gets the correct parent for new Node
            if (_tree[_freeLocations.top()] < _tree[parentIndex]) { //If new child node is lesser then added to left
                setLeft(parentIndex, _freeLocations.top());
            }
            else { //If new child node is greater or same then added to right
                setRight(parentIndex, _freeLocations.top());
            }
        }
        _freeLocations.pop();
        _numNodes++;
    }
};

//Returns parent index for a newly added node
template <class DT>
int ArrayBST<DT>::getParentIndex(int newIndex, int traverseIndex) {
    if (_tree[newIndex] < _tree[traverseIndex]) {  //If Newly Inserted Node is lesser then Go to left Tree    
        if (_tree[traverseIndex].getleft() == -1)  //If Left is -1 then this will be perfect position to add node
            return traverseIndex; //return parents index
        return getParentIndex(newIndex, _tree[traverseIndex].getleft()); //If It has left Tree then traverse it
    }
    else if (_tree[newIndex] >= _tree[traverseIndex]) { //If Newly Inserted Node is bigger then Go to right Tree
        if (_tree[traverseIndex].getright() == -1) //If Right is -1 then this will be perfect position to add node
            return traverseIndex;
        return getParentIndex(newIndex, _tree[traverseIndex].getright()); //If It has right Tree then traverse it
    }
    return traverseIndex;
}

////////////////////////////////////////////////////////////////////////////////////////
// In Order & Pre Order Method
////////////////////////////////////////////////////////////////////////////////////////

// Display methods and traversals
template <class DT>
void ArrayBST<DT>::display(ostream& os) const {
    os << endl;
    os << "Information in Tree: " << endl;
    displayPreOrder(os); //Call Pre order method to print Tree in pre order
    displayInOrder(os);  //Call IN Order method to print Tree in IN order
    cout << endl;
};

//Display Nodes in Pre Order
template <class DT>
void ArrayBST<DT>::displayPreOrder(ostream& os) const {
    os << "Pre Order Traversal: " << endl;
    preOrder(_tree[_rootIndex], os); //call th pre order traversal method
    cout << endl;
};
//Method to Pre Order Traverse the Binary Search Tree 
template <class DT>
void ArrayBST<DT>::preOrder(ArrayBTNode<int> node, ostream& os) const {
    //Pre Order Traversal
    //Root Node
    os << *node.getinfo() << " ";
    //Left Tree Traversal
    if (node.getleft() != -1) //Checks if it has left tree
        preOrder(_tree[node.getleft()], os); //Traverses the Left
    //Right Tree Traversal
    if (node.getright() != -1) //Checks if it has right tree
        preOrder(_tree[node.getright()], os); //Traverses the Right
}

//It will Display Tree In Order
template <class DT>
void ArrayBST<DT>::displayInOrder(ostream& os) const {
    os << "In Order Traversal: " << endl;
    inOrder(_tree[_rootIndex], os); //calls InOrder Traversal Method
};

//Method to In Order Traverse the BST
template <class DT>
void ArrayBST<DT>::inOrder(ArrayBTNode<int> node, ostream& os) const {
    //In Order Traversal
    //Left 
    if (node.getleft() != -1) //Check if there is left tree
        inOrder(_tree[node.getleft()], os); //Traverse
    //Parent or Root
    os << *node.getinfo() << " "; //Display Parent
    //Right
    if (node.getright() != -1) //Check if there is right tree
        inOrder(_tree[node.getright()], os); //Traverse
};

////////////////////////////////////////////////////////////////////////////////////////
// Display Raw Methods
////////////////////////////////////////////////////////////////////////////////////////

// Display the array and all of its contents
template <class DT>
void ArrayBST<DT>::printRaw() {
    // Displaying Nodes which has Info(Doesn't have NULL)
    cout << endl << "Raw Data: " << endl;
    if (!isEmpty()) //If Tree has nodes
        rawNodes(); //Call method to print Raw nodes with indexes
    cout << "Free Indexes: " << endl;
    if (Size() < maxSize()) //If current size of tree is less than max size there are empt locations
        freeIndexes(); //Call method to print free locations
    else
        cout << "None" << endl;
};

//Prints Raw Nodes
template <class DT>
void ArrayBST<DT>::rawNodes() {
    int cursor = 0;
    while (cursor < _size) //Loop for all nodes in tree
    {
        if (_tree[cursor].getinfo() != NULL) { // when info is not null then its part of tree
            cout << "Index " << cursor << ": "; //Prints Index
            cout << _tree[cursor] << endl; // Prints content of node.
        }
        cursor++;
    }
}

//Prints free indexes
template <class DT>
void ArrayBST<DT>::freeIndexes() {
    stack<int> free = _freeLocations;//Copy freeLocations to temporary Stack so that pop doesn't remove from original 
    while (!free.empty()) {
        cout << free.top() << (free.size() == 1 ? "" : ", "); //Prints the element at top and check size so that comma doesn't print to last element
        free.pop(); //Remove top element from stack
    }
    cout << endl;
}

////////////////////////////////////////////////////////////////////////////////////////
// Find Methods
////////////////////////////////////////////////////////////////////////////////////////

//returns if a node is present in tree
template <class DT>
bool ArrayBST<DT>::find(DT& object) {
    return (traverseFind(_rootIndex, object) != -1); //returns true if index found is not -1
}

//returns index of the required node 
template <class DT>
int ArrayBST<DT>::findIndex(DT& object) {
    return traverseFind(_rootIndex, object);
}

//Returns index or -1 for node being searched if found or not found respectively
template <class DT>
int ArrayBST<DT>::traverseFind(int traverseIndex, DT& object) {
    if (traverseIndex != -1) { //if current index in tree traverse in not -1 then we have more nodes in tree
        if (*_tree[traverseIndex].getinfo() == object) //compares the nodes
            return traverseIndex; //return index if both nodes are same
        if (object > *_tree[traverseIndex].getinfo()) //if less the traverse left tree
            return traverseFind(_tree[traverseIndex].getright(), object);
        else //traverse right tree
            return traverseFind(_tree[traverseIndex].getleft(), object);
        return -1;
    }
    else //no more nodes, not found returns -1
        return traverseIndex;
}


////////////////////////////////////////////////////////////////////////////////////////
// Removal Methods
////////////////////////////////////////////////////////////////////////////////////////

// extra credit
//Removes the node from Tree
template <class DT>
void ArrayBST<DT>::remove(DT& object) {
    int removeNodeIndex = findIndex(object); //Find the index of node
    cout << endl << "Removing " << object << endl;
    if (removeNodeIndex == -1) { //No Such node found in tree
        cout << "Object not found." << endl;
    }
    else {
        if (_tree[removeNodeIndex].getright() == -1) { //node being removed doesn't have right Tree
            int leftNodeIndex = _tree[removeNodeIndex].getleft();
            if (leftNodeIndex == -1) { //Node being removed doesn't have left tree too
                _tree[removeNodeIndex].setInfoNull(); //Info of Node being removed will be set to null
                _tree[removeNodeIndex].setLeft(-1); //Left Child Index of Node being removed is set to -1
                _tree[removeNodeIndex].setRight(-1); //Right Child Index of Node being removed is set to -1
                removeIndexFromParent(removeNodeIndex, _rootIndex); //Call methods to remove removed node's index from its parent
                _freeLocations.push(removeNodeIndex); //Add its location to Free Location Stack
            }
            else { ////Node being removed has left tree too
                replaceImmediate(removeNodeIndex, leftNodeIndex, false); //Calls method to copy content of left child to node being removed and free left index
            }
        }
        else {
            int rightNodeIndex = _tree[removeNodeIndex].getright();
            if (_tree[rightNodeIndex].getleft() == -1) { //Right Child of Node being removed doesn't have a left tree
                replaceImmediate(removeNodeIndex, rightNodeIndex, true); //Calls method to copy content of right child to node being removed and free right index
            }
            else { //Right Child of Node being removed has a left tree
                vector<int> temp;
                vector<int> leftTree = getLeftTree(temp, rightNodeIndex, rightNodeIndex); //Calls method to get lowest node from left tree of right child node of node being removed  
                setData(removeNodeIndex, *_tree[leftTree[0]].getinfo()); //copy data from lowest node to node being removed
                _tree[leftTree[0]].setInfoNull(); //set info of lowest node to null
                removeIndexFromParent(leftTree[0], rightNodeIndex); //Call methods to remove removed node's index from its parent
                _freeLocations.push(leftTree[0]); //add its location on free stack
            }
        }
        _numNodes--; //decrement the total number of nodes on tree by 1
    }
}

//returns the left tree of a given node
template <class DT>
vector<int> ArrayBST<DT>::getLeftTree(vector<int> leftTree, int beginIndex, int traverseIndex) {
    //In Order Traversal
    //Left 
    if (_tree[traverseIndex].getleft() != -1) //Check if there is left tree
        return getLeftTree(leftTree, beginIndex, _tree[traverseIndex].getleft()); //Traverse
    //Parent or Root
    leftTree.push_back(traverseIndex);
    //Right
    if (_tree[traverseIndex].getright() != -1) //Check if there is right tree
        return getLeftTree(leftTree, beginIndex, _tree[traverseIndex].getright()); //Traverse
    return leftTree;
};

//This mehtod will replace the content node being removed with its immediate child
template <class DT>
void ArrayBST<DT>::replaceImmediate(int removeIndex, int replaceIndex, bool isRight) {
    int* nl = NULL; //Creates a null value pointer
    setData(removeIndex, *_tree[replaceIndex].getinfo()); //replace info
    if (isRight) { //if node being replaced is right node
        setRight(removeIndex, _tree[replaceIndex].getright()); //replace right
    }
    else { //if node being replaced is left node
        setLeft(removeIndex, _tree[replaceIndex].getleft()); //replace left
        setRight(removeIndex, _tree[replaceIndex].getright()); //replace right
    }
    _tree[replaceIndex].setInfo(*nl); //sets null
    _tree[replaceIndex].setLeft(-1); //sets -1 on left
    _tree[replaceIndex].setRight(-1); //sets -1 on right
    _freeLocations.push(replaceIndex); //add free location on stack
}

//This will remove an index of removed node present in left or right of any parent node
template<class DT>
bool ArrayBST<DT>::removeIndexFromParent(int indexToRemove, int traverseIndex) {
    if (_tree[traverseIndex].getleft() == indexToRemove) { //check if current node's left is ponting to removed node index
        _tree[traverseIndex].setLeft(-1); //set to -1 as its no longer part of tree
        return true;
    }
    else if (_tree[traverseIndex].getright() == indexToRemove) { //check if current node's right is ponting to removed node index
        _tree[traverseIndex].setRight(-1); //set to -1 as its no longer part of tree
        return true;
    }
    //if not found in current node then traverser through tree
    if (_tree[traverseIndex].getleft() != -1) {
        return removeIndexFromParent(indexToRemove, _tree[traverseIndex].getleft());
    }
    if (_tree[traverseIndex].getright() != -1) {
        return removeIndexFromParent(indexToRemove, _tree[traverseIndex].getright());
    }
    return false;
}

////////////////////////////////////////////////////////////////////////////////////////
// Main Method
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    // Get input for the size of the tree
    int inputSize;
    cin >> inputSize;
    cout << "Number of maximum nodes: " << inputSize << endl;

    //Get Integer Input value to insert new node
    char c; //stores the command
    int* nodeData; //integer value of nodes will be saved for Inserting and finding a node

    // Create a BST of the size inputSize
    ArrayBST<int> myBST = ArrayBST<int>(inputSize);
    while (cin >> c) {
        switch (c) {
        case 'I':
            nodeData = new int; //new pointer initialized
            cin >> *nodeData;
            myBST.insert(*nodeData); //calls insert method
            break;
        case 'O':
            cout << myBST; //operator overload calls Pre Order and In Order Method
            break;
        case 'A':
            myBST.printRaw();
            break;
        case 'F':
            nodeData = new int; //new pointer initialized
            cin >> *nodeData;
            cout << endl << "Finding " << *nodeData << endl;
            if (myBST.find(*nodeData)) //checks if tree has given node
                cout << "Number found at index " << myBST.findIndex(*nodeData) << "." << endl;
            else
                cout << "Number not found." << endl;
            break;
        case 'R':
            nodeData = new int; //new pointer initialized
            cin >> *nodeData;
            myBST.remove(*nodeData);
            break;
        default:
            break;
        }
    }
    return 0;
}
