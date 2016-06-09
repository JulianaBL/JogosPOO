//Tema3- Corrida de carros
//Incluindo na biblioteca.
#include <iostream> 
#include <string>
#include <ctime>
using namespace std;

//Identifica a função
void imprimir_espacos(int total1);

//função principal
int main()
{
	// Variavel boleana 
	bool sair = false;

	//Variavel string que salvar os nomes dos jogadores
	string jog1, jog2;

	//Variavel para definir a quantidade de espacos inicial de cada carro
	int total1 = 0, total2 = 0;

	//Solicita o nome do primeiro jogador. 
	cout << "Digite o nome do jogador 1:" << endl;
	// Salva o nome digitado na variavel jog1
	cin >> jog1;
	//Solicita  o nome do  segundo jogador
	cout << "Digite o nome do jogador 2:" << endl;
	// Salva o nome digitado na variavel jog2
	cin >> jog2;

	//Usando o laço para monstra a hora.
	while (sair == false)
	{
		// Variavel que definir o tamanho da pista
		int total_espacos = 80;

		//Fazendo o calculo para gerar um numero aleatório
		srand((int)time(0));

		//Para o jogador 1: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//Para o jogador 2: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;

		//Imprimindo na tela o carro

		cout << "Carrinho" << endl;

		cout << "LARGADA:                                                               CHEGADA:" << endl;

		// Imprime nome do primeiro jogador
		cout << "Piloto 1:" << jog1 << endl;
		//Usa o numero aleatorio gerado no Total1 para definir a qntd de espaços
		imprimir_espacos(total1);
		// Teto do carro
		cout << "  _  " << endl;
		//Usa o numero aleatorio gerado no Total1 para definir a quantidade de espaços
		imprimir_espacos(total1);
		//Corpo do carro
		cout << "-o-o>" << endl;
		//Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;

		//Total de espaços do piloto 1
		cout << "Valor que andou: " << total1 << endl;

		// Imprime nome do segundo jogador
		cout << "Piloto 2:" << jog2 << endl;
		//Usa o numero aleatorio gerado no Total2 para definir a quantidade de espaços
		imprimir_espacos(total2);
		// teto do carro
		cout << "  _  " << endl;
		//Usa o numero aleatorio gerado no Total2 para definir a qntd de espaços
		imprimir_espacos(total2);
		//Corpo do carro
		cout << "-o-o>" << endl;
		//Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;

		//Total de espaços do piloto 2
		cout << "Valor que andou: " << total2 << endl;

		//Atualiza a tela a cada rodada
		system("cls");

		//Se sair não limpa a tela.
		//Condição para fazer a condição do laço ficar falsa, e o jogo parar
		if (total1 >= 80 || total2 >= 80)
		{
			//Muda o laço
			sair = true;

		}

		//Se continuar limpa a tela.
		else system("cls");


	}

	//Quando sair do laço mostra que o jogo acabou
	cout << "Poxa, o jogo chegou ao fim  :(  " << endl;

	//Define qual jogador ganhou, ou até se ocorreu empate

	//Mensagem caso o jog1 ganhe
	if (total1 >= 80) cout << jog1 << ", Parabens, voce venceu!" << endl;

	//Mensagem caso o jog 2 ganhe
	else if (total2 >= 80) cout << jog2 << ", Parabens, voce venceu !" << endl;

	//Mensagem em caso de empate
	else cout << "OCORREU EMPATE!" << endl;

	return 0; //Retorna ao inicio

}



void imprimir_espacos(int total) //Usando a função void 
{
	// Laço for 
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		cout << " ";// espaço que vai ser impresso, dependendo do numero aleatorio.


	}

}