# コンパイラの指定
CXX = g++

# コンパイラオプション
CXXFLAGS = -Wall -Wextra -std=c++17

# Boost ヘッダーファイルへのパス
BOOST_INCLUDE = /path/to/boost

# メインのソースファイル
SOURCE = main.cpp

# オブジェクトファイル
OBJECT = bin/main.o

# 実行ファイルの名前
EXECUTABLE = bin/myapp

# デフォルトターゲット
all: $(EXECUTABLE)

# 実行ファイルのビルド
$(EXECUTABLE): $(OBJECT)
	$(CXX) $(CXXFLAGS) -o $@ $^

# オブジェクトファイルのビルド
bin/main.o: $(SOURCE)
	$(CXX) $(CXXFLAGS) -I$(BOOST_INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJECT) $(EXECUTABLE)
