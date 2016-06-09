//Tema 2 Teste de For�a.
// Incluindo na bibliotecas.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	//Declara��o de vari�veis
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

		//Adiciona uma "semente" ao gerador de n�meros
		srand((int)time(0));
		//Gera um n�mero aleat�tio entre 1 e 6
		dado1 = rand() % 6 + 1;
		dadof1 = dado1;


		//Se a vari�vel que guarda o valor aleat�rio for mais que 4
		if (dadof1 >= 4)
		{
			//C�lculo para obter valor de dano
			dano1 = a2 - d1;
			vida1 = vida1 - dano1;

		}


		//Segundo jogador 

		int dado2;
		int dadof2;
		int dano2;

		//Adiciona uma "semente" ao gerador de n�meros
		srand((int)time(0));
		//Gera um n�mero aleat�tio entre 1 e 6
		dado2 = rand() % 6 + 1;
		dadof2 = dado2;

		//Se a vari�vel que guarda o valor aleat�rio for mais que 4
		if (dadof2 >= 4)
		{
			//C�lculo para obter valor de dano
			dano2 = a1 - d2;
			vida2 = vida2 - dano2;

		}

		//Caso o valor do dado seja maior que 4 o jogador ir� acertar
		if (dadof2 && dadof1 >= 4)
		{
			//Imprime o acerto e o dano obtido
			cout << "\Acertou!:)" << "           " << "Dano:-" << dano1 << endl;

		}
		//Caso a codi��o do n�mero do dado ser menor que 4 o jogador erra 
		else cout << "Errou :( " << endl;

		//imprimindo informa��es 
		//Imprime o ataque do jog 1 e do jog 2
		cout << "A:" << a1 << "                    " << "A:" << a2 << endl;
		//Imprime a defesa do jog 1 e do jog2
		cout << "D:" << d1 << "                    " << "D:" << d2 << endl;
		//Imprime a vida do jog 1 e do jog 2
		cout << "Vida:" << vida1 << "               " << "Vida:" << vida2 << endl;

		//Continua o loop .
		system("Pause");

		//Se a vida de um dos jogadores chegar a zero a tela ser� fechada.
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;

		}
		//Caso contrario, a vida for maior que zero a tela ser� atualizada para a continua��o do loop
		else system("cls");

		//Quando a vida chegar at� 0 os dois perdem
		if (vida1 && vida2 < 0) cout << "Os dois perderam!" << endl;
	}
	return 0;
}