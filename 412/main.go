package main

import (
	"fmt"
	"strconv"
)

func fizzBuzz(n int) []string {
	var result []string

	var result_string_map = map[int]string{
		3: "Fizz",
		5: "Buzz",
	}

	var dividers = [2]int{3, 5}

	for i := 1; i <= n; i++ {

		resItem := ""

		for _, divider := range dividers {
			if i%divider == 0 {
				resItem += result_string_map[divider]
			}
		}

		if resItem == "" {
			resItem = strconv.Itoa(i)
		}

		result = append(result, resItem)
	}

	return result
}

func main() {
	fmt.Println(fizzBuzz(15))
}
