// FreeServer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <g3log/g3log.hpp>
#include <g3log/logworker.hpp>
#include <iomanip>

int main(int argc, char **argv)
{
    auto worker = g3::LogWorker::createLogWorker();
    auto handle = worker->addDefaultLogger(argv[0], "./");
    g3::initializeLogging(worker.get());

    LOG(INFO) << "Hello World!\n";
}