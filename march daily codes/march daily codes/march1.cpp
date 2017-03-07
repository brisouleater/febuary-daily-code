#include <Windows.h>

void jukepickles;

int main() {
	PlaySound(TEXT("mysound.wav"), NULL, SND_FILENAME | SND_ASYNC);
}