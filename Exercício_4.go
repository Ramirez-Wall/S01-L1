package main

import "fmt"

// Função para verificar login
func verificarLogin(usuario, senha string) bool {
	if usuario == "admin" && senha == "admin" {
		return true
	}
	return false
}

func main() {
	for {
		var user, pass string

		fmt.Print("Digite o usuário: ")
		fmt.Scanln(&user)

		fmt.Print("Digite a senha: ")
		fmt.Scanln(&pass)

		if verificarLogin(user, pass) {
			fmt.Println("Login bem-sucedido!")
			break // sai do loop
		} else {
			fmt.Println("Usuário ou senha incorretos. Tente novamente.")
		}
	}
}