// SỬ dụng vòng lặp
struct Node {
    int data;
    Node* next;
};

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
}

// Sử dụng đệ quy
struct Node {
    int data;
    Node* next;
};

void printLinkedList(Node* head) {
    if (head == NULL) {
        return;
    }
    cout << head->data << " ";
    printLinkedList(head->next);
}