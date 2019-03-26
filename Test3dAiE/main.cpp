#include "Test3dAiEApp.h"

int main() {
	
	// allocation
	auto app = new Test3dAiEApp();

	// initialise and loop
	app->run("AIE", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}