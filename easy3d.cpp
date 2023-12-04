#include <easy3d/viewer/viewer.h>
#include <easy3d/renderer/drawable_lines.h>

int main(int argc, char** argv) {
    easy3d::Viewer viewer("Simple Easy3D Viewer");

    std::vector<easy3d::vec3> points = {
        easy3d::vec3(0, 0, 0),
        easy3d::vec3(1, 1, 1)
    };

    std::vector<easy3d::vec3> colors = {
        easy3d::vec3(1, 0, 0),
        easy3d::vec3(0, 0, 1)
    };

    auto lines = new easy3d::LinesDrawable("line");
    lines->update_vertex_buffer(points);
    lines->update_color_buffer(colors);

    viewer.add_drawable(lines);

    return viewer.run();
}
