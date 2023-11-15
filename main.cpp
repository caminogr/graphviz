#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graphviz.hpp>


#include <iostream>
#include <algorithm>
#include <fstream>

int main() {
    // 無向グラフの定義
    typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS> Graph;

    // グラフのインスタンスを作成
    Graph g;


  //visualize file 生成
    std::ofstream dot_file("graph.dot");
    write_graphviz(dot_file, g);
}

