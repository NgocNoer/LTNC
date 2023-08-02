// SỬ dụng vòng lặp
struct Node {
    int data;
    Node* next;
};

void insertTail(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Sử dụng đệ quy
struct Node {
    int data;
    Node* next;
};

void insertTail(Node*& head, int value) {
    if (head == NULL) {
        head = new Node;
        head->data = value;
        head->next = NULL;
        return;
    }
    insertTail(head->next, value);
}