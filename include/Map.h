#ifndef MAP_H
#define MAP_H

#include <iostream>

class Map {
public:
    static const int HEIGHT = 12;
    static const int WIDTH = 12;
    char grid[HEIGHT][WIDTH];

    Map() {
        // Inisialisasi peta sesuai layout yang baru
        char initGrid[HEIGHT][WIDTH] = {
            {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
            {'#', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
            {'#', ' ', '#', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#'},
            {'#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#'},
            {'#', ' ', '#', ' ', '#', '#', '#', '#', ' ', '#', ' ', '#'},
            {'#', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', '#'},
            {'#', '#', '#', ' ', '#', ' ', ' ', '#', ' ', '#', '#', '#'},
            {'#', ' ', ' ', ' ', '#', ' ', '#', '#', ' ', ' ', ' ', '#'},
            {'#', ' ', '#', '#', ' ', ' ', ' ', ' ', '#', '#', ' ', '#'},
            {'#', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', '#'},
            {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
            {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
        };
        for (int i = 0; i < HEIGHT; ++i) {
            for (int j = 0; j < WIDTH; ++j) {
                grid[i][j] = initGrid[i][j];
            }
        }
    }

    void render() {
        for (int i = 0; i < HEIGHT; ++i) {
            for (int j = 0; j < WIDTH; ++j)
                std::cout << grid[i][j] << " ";
            std::cout << "\n";
        }
    }
};

#endif
