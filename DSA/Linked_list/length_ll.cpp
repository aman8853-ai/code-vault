#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val = x;
        next = NULL;
    }
};

int getLength(ListNode *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

int main(){
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(40);

    cout << "Length of linked list = " << getLength(head) << endl;
    return 0;
}
