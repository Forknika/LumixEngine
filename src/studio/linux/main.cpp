#include "editor/studio_app.h"


int main(int argc, char* argv[])
{
	auto* app = Lumix::StudioApp::create();
	app->run();
	int exit_code = app->getExitCode();
	Lumix::StudioApp::destroy(*app);
	return exit_code;
}
