#include <iostream>

using namespace std;

     struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *mergeTwoLists(ListNode* lista1_1, ListNode* lista2_1){

}



int main() {

    ListNode lista1_3(4);
    ListNode lista1_2(3, &lista1_3);
    ListNode lista1_1(1, &lista1_2);

    ListNode lista2_3(4);
    ListNode lista2_2(2, &lista2_3);
    ListNode lista2_1(1, &lista2_2);

    ListNode lista();

    ListNode *merged = mergeTwoLists(&lista1_1, &lista2_1);

    
    



    return 0;
}