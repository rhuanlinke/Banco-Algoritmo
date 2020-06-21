/* Ex: console.log (Math.PI)
---------------------------
Funcao sem retorno:*/
function imprimirSoma(a, b) {
    console.log(a+b)
}

imprimirSoma(2,3)
imprimirSoma(2, -5, 4, 5) //considera os dois numeros
imprimirSoma(2) //Soma de 2 + undefined é Not a Number

// Funcao com retorno:
function soma(a, b = 0) {
    return a + b

}

console.log(soma(2)) //o B está definido como 0 na criação da função
console.log(soma(2,6))