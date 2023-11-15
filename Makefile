# コンパイラの指定
CXX = g++

# コンパイラオプション
CXXFLAGS = -Wall -Wextra -std=c++17

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
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 'make clean' の定義
clean:
	rm -f $(OBJECT) $(EXECUTABLE)
