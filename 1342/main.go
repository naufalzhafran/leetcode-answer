package main

import (
	"fmt"
)

func numberOfSteps(num int) int {
	res := 0

	for num > 0 {
		if num&1 == 1 {
			num = num ^ 1
		} else {
			num = num >> 1
		}
		res++
	}

	return res
}

func main() {
	fmt.Println(numberOfSteps(14))
}
