pushd .
cd ./liblog
make $1
popd
pushd .
cd ./logcat
make $1
popd
