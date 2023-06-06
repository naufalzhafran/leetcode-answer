package main

import (
	"fmt"
)

func maximumWealth(accounts [][]int) int {
	var res int = 0

	for i := 0; i < len(accounts); i++ {
		var sum int = 0

		for j := 0; j < len(accounts[i]); j++ {
			sum += accounts[i][j]
		}

		if res < sum {
			res = sum
		}
	}

	return res
}

func main() {
	arr := [][]int{
		{1, 2, 3},
		{2, 3, 4},
	}
	fmt.Println(maximumWealth(arr))
}
