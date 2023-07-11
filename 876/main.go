package main

import (
	"fmt"
)

type ListNode struct {
	Val  int
	Next *ListNode
}

func middleNode(head *ListNode) *ListNode {
	slow, fast := head, head

	for fast != nil && fast.Next != nil {
		fast = fast.Next.Next
		slow = slow.Next
	}
	return slow
}

func printLinkedList(head *ListNode) {
	printed := head
	printedArr := []int{}

	for printed != nil {
		printedArr = append(printedArr, printed.Val)
		printed = printed.Next
	}

	fmt.Println(printedArr)
}

func main() {
	questionParam := []int{2, 3, 4, 5, 6}

	paramHead := &ListNode{Val: 1}
	linkedListParam := paramHead

	for _, param := range questionParam {
		linkedListParam.Next = &ListNode{Val: param}
		linkedListParam = linkedListParam.Next
	}

	printLinkedList(paramHead)
	printLinkedList(middleNode(paramHead))
}
