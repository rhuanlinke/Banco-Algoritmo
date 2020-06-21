let valor
console.log(valor) //undefined, valor não foi inicializado

//console.log(valor2) //its not defined

valor = null //ausência de valor //UTILIZAR NULL QUANDO QUISER ZERAR O VALOR DE UMA VARIAVEL, E NÃO UNDEFINED
console.log(valor)
//console.log(valor.toString()) //ERRO!

const produto = {}
console.log(produto.preco); //preço dentro do produto não foi definido
console.log(produto)

produto.preco = 3.50
console.log(produto)

produto .preco = undefined //evite atribuir undefined (deixe para a linguagem definir) e se for usar USE NULL
console.log(!!produto.preco)
// delete produto.preco
console.log(produto) //preco tem um atributo, que é undefined KAPPA

produto.preco = null //sem preço OPTE PELO NULO
console.log(produto)