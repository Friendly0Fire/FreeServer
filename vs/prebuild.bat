if not exist ..\tmp\g3log mkdir ..\tmp\g3log
cd ..\tmp\g3log
cmake ..\..\third\g3log -G "Visual Studio 16 2019" -DG3_SHARED_LIB=OFF
msbuild /m /p:Configuration=Release g3log.sln /p:Platform=x64
msbuild /m /p:Configuration=Debug g3log.sln /p:Platform=x64