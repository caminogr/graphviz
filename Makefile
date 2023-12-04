## コンパイラの指定
#CXX = g++
#
## コンパイラオプション
#CXXFLAGS = -Wall -Wextra -std=c++17
#
## Boost ヘッダーファイルへのパス
#BOOST_INCLUDE = /usr/local/Cellar/boost/include
#
#LDFLAGS = -lCGAL -lCGAL_Core
#SOURCE = main.cpp
#OBJECT = bin/main.o
#EXECUTABLE = bin/myapp
#
## デフォルトターゲット
#all: $(EXECUTABLE)
#
## 実行ファイルのビルド
#$(EXECUTABLE): $(OBJECT)
#	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
#
## オブジェクトファイルのビルド
#$(OBJECT): $(SOURCE)
#	$(CXX) $(CXXFLAGS) -I$(BOOST_INCLUDE) -c $< -o $@
#
#clean:
#	rm -f $(OBJECT) $(EXECUTABLE)
