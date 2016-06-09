//Tema 2 Teste de Força.
// Incluindo na bibliotecas.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	//Declaração de variáveis
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int a1 = 4, a2 = 4;
	int d1 = 1, d2 = 1;

	//Perguta  os nome do jogador 1
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	//Perguta os nome do jogador 2
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	//Fazendo loop 

	while (sair == false)
	{
		//Mostra os  personagens
		cout << " O			   O" << endl;
		cout << ".T./		         \\.T." << endl;
		cout << " ^			   ^" << endl;
		//Mostra a vida do personagens
		cout << jog1 << "	                " << jog2 << endl;


		//Primeiro jogador

		int dado1;
		int dadof1;
		int dano1;

		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0));
		//Gera um número aleatótio entre 1 e 6
		dado1 = rand() % 6 + 1;
		dadof1 = dado1;


		//Se a variável que guarda o valor aleatório for mais que 4
		if (dadof1 >= 4)
		{
			//Cálculo para obter valor de dano
			dano1 = a2 - d1;
			vida1 = vida1 - dano1;

		}


		//Segundo jogador 

		int dado2;
		int dadof2;
		int dano2;

		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0));
		//Gera um número aleatótio entre 1 e 6
		dado2 = rand() % 6 + 1;
		dadof2 = dado2;

		//Se a variável que guarda o valor aleatório for mais que 4
		if (dadof2 >= 4)
		{
			//Cálculo para obter valor de dano
			dano2 = a1 - d2;
			vida2 = vida2 - dano2;

		}

		//Caso o valor do dado seja maior que 4 o jogador irá acertar
		if (dadof2 && dadof1 >= 4)
		{
			//Imprime o acerto e o dano obtido
			cout << "\Acertou!:)" << "           " << "Dano:-" << dano1 << endl;

		}
		//Caso a codição do número do dado ser menor que 4 o jogador erra 
		else cout << "Errou :( " << endl;

		//imprimindo informações 
		//Imprime o ataque do jog 1 e do jog 2
		cout << "A:" << a1 << "                    " << "A:" << a2 << endl;
		//Imprime a defesa do jog 1 e do jog2
		cout << "D:" << d1 << "                    " << "D:" << d2 << endl;
		//Imprime a vida do jog 1 e do jog 2
		cout << "Vida:" << vida1 << "               " << "Vida:" << vida2 << endl;

		//Continua o loop .
		system("Pause");

		//Se a vida de um dos jogadores chegar a zero a tela será fechada.
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;

		}
		//Caso contrario, a vida for maior que zero a tela será atualizada para a continuação do loop
		else system("cls");

		//Quando a vida chegar até 0 os dois perdem
		if (vida1 && vida2 < 0) cout << "Os dois perderam!" << endl;
	}
	return 0;
}