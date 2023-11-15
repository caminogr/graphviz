#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graphviz.hpp>


#include <iostream>
#include <algorithm>
#include <fstream>

int main() {
    // 無向グラフ
    /* typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS> Graph; */

    // 有向グラフ
    typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS> Graph;

    Graph g;
    Graph::vertex_descriptor v1 = add_vertex(g);
    Graph::vertex_descriptor v2 = add_vertex(g);
    Graph::vertex_descriptor v3 = add_vertex(g);
    Graph::vertex_descriptor v4 = add_vertex(g);

    add_edge(v1, v2, g);
    add_edge(v2, v3, g);
    add_edge(v2, v4, g);

    typedef boost::graph_traits<Graph>::vertex_iterator vertex_iter;
    typedef boost::graph_traits<Graph>::edge_iterator edge_iter;

    std::pair<vertex_iter, vertex_iter> vp;
    for (vp = vertices(g); vp.first != vp.second; ++vp.first) {
        std::cout << "Vertex: " << *vp.first << std::endl;
    }

    std::pair<edge_iter, edge_iter> ep;
    for (ep = edges(g); ep.first != ep.second; ++ep.first) {
        std::cout << "Edge: " << *ep.first << std::endl;
    }

     // 頂点の走査
    for (vp = vertices(g); vp.first != vp.second; ++vp.first) {
        Graph::vertex_descriptor v = *vp.first;
        std::cout << "v: " << v << std::endl;
    }

    // 辺の走査
    for (ep = edges(g); ep.first != ep.second; ++ep.first) {
        Graph::edge_descriptor e = *ep.first;
        std::cout << "e: " << e << std::endl;
    }


  //visualize file 生成
    std::ofstream dot_file("graph.dot");
    write_graphviz(dot_file, g);
}

