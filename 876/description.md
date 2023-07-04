# 876. Middle of the Linked List

## Question

Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

**Example 1:**

```
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
```

**Example 2:**

```
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
``` 

**Constraints:**

- The number of nodes in the list is in the range [1, 100].
- `1 <= Node.val <= 100`

## Solution

There are 2 easy solutions for this problem. The first is to find the length of the linked list, and we can get the position of the middle node. The second and faster solution is using 2 pointers (fast and slow) for traversing the linked list. The benefit of the second solution is we only have to traverse the linked list once.

**Python Solution**

```python
def middleNode(head: Optional[ListNode]) -> Optional[ListNode]:
    pointerA = pointerB = head

    while pointerB and pointerB.next :
        pointerA = pointerA.next
        pointerB = pointerB.next.next

    return pointerA
```