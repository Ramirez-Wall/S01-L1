package main

import "fmt"

// Função que gera a sequência de Fibonacci
func fibonacci(qtd int) []int {
	seq := []int{}

	if qtd <= 0 {
		return seq
	}

	a, b := 0, 1
	for i := 0; i < qtd; i++ {
		seq = append(seq, a)
		a, b = b, a+b
	}

	return seq
}

func main() {
	var n int

	fmt.Print("Digite quantos números terá a sequência de Fibonacci: ")
	fmt.Scanln(&n)

	seq := fibonacci(n)

	fmt.Println("Sequência de Fibonacci:")
	for _, v := range seq {
		fmt.Print(v, " ")
	}
	fmt.Println()
}