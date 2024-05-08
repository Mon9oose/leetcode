/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // list1 혹은 list2가 nullptr일 경우 다른 list를 return 함
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        // first node의 위치를 정함 (list1 or list2)
        ListNode *first;
        if(list1->val <= list2->val)
        {
            first = list1;
            list1 = list1->next;
        }
        else
        {
            first = list2;
            list2 = list2->next;
        }

        // firstnode의 주소값은 보존한체 계속 next를 target할 별도의 pointer 생성
        auto target = first;
        while (true)
        {
            if(list1 == nullptr)
            {
                target->next = list2;
                break;
            }
            if(list2 == nullptr)
            {
                target->next = list1;
                break;
            }

            if(list1->val <= list2->val)
            {
                target->next = list1;
                list1 = list1->next;
            }
            else
            {
                target->next = list2;
                list2 = list2->next;
            }
            target = target->next;
        }
        
        return first;
    }
};