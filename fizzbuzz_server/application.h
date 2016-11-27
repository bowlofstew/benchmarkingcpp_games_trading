#pragma once
#include <stdint.h>
#include <vector>
#include "timing.h"
#include "network.h"

namespace Demo {

class Application : public IServerConnectionHandler
{
public:
	Application() {}
	~Application();

	void SimulationRun(const char* simulationFile);

	void HandleRequest(const char* recvBuf, size_t recvSize, IConnection* conn) override;

private:
	TimeLog mTimingLog;
	SimulatedServer mSimServer;
};

}