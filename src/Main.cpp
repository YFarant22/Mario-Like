#include "GameManager.h"

int main(void)
{
	GameManager* GM = new GameManager();

	return(GM->gameLoop());
}
