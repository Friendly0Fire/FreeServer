@echo OFF
cd %~dp0

cd g3log
mkdir -p build
cd build
cmake .. -G "Visual Studio 16 2019"
msbuild g3log.sln /p:Configuration=Release