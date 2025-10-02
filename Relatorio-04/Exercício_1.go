package main

import "fmt"

// Função que retorna se o número é positivo, negativo ou zero
func VerifNum(n int) string {
	if n > 0 {
		return "Positivo"
	} else if n < 0 {
		return "Negativo"
	}
	return "Zero"
}

func main() {
	var numero int

	fmt.Print("Digite um número: ")
	fmt.Scanln(&numero)

	fmt.Println("O número é:", VerifNum(numero))
}
