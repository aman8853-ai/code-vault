#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;

    }
};
//funtion to find length
int getLength(ListNode *head){
    int count =0;
    while(head!=NULL){
        count++;
        head=head->next;

    }
    return count;
}
//creat ll
int main(){
ListNode* head=new ListNode(10);
head->next=new ListNode(20);
head->next->next=new ListNode(40);

cout <<"Length of linkedlist="<<getLength(head)<<endl;
return 0;
}
