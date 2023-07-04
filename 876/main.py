from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
def printLinkedList(list: ListNode):
    printed = list
    printedArr = []
    while printed :
        printedArr.append(printed.val)
        printed = printed.next
    print(printedArr)
        


def middleNode(head: Optional[ListNode]) -> Optional[ListNode]:
    pointerA = pointerB = head

    while pointerB and pointerB.next :
        pointerA = pointerA.next
        pointerB = pointerB.next.next

    return pointerA




questionParam = [2,3,4,5,6]
linkedListParam = ListNode(1)
paramHead = linkedListParam

for param in questionParam:
    linkedListParam.next = ListNode(param)
    linkedListParam = linkedListParam.next

printLinkedList(paramHead)

printLinkedList(middleNode(paramHead))