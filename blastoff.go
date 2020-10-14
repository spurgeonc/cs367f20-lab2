package main

import "fmt"

func main() {
	const Time int = 10
	
	for i := Time; i >= 0; i-- {
		fmt.Printf("%d\n", i)
	}
	fmt.Printf("BLASTOFF\n");
}
