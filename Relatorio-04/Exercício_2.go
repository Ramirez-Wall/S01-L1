package main

import "fmt"

func main() {
	var num int

	fmt.Print("Digite um número: ")
	fmt.Scanln(&num)

	switch num % 2 {
	case 0:
		fmt.Println(" O número é par")
	case 1, -1: // cobre negativos também
		fmt.Println("O número é ímpar")
	}
}