struct Node {
    int data;
    Node* next;
};

void insertHead(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}