#pragma once
#include "../../Deep/Deep.h"

namespace Kiwii {
	class Map_Exp {
	public:
		char** map;
		uint16_t x = 0;
		uint16_t y = 0;

		Map_Exp(uint16_t x, uint16_t y) {
			this->x = x;
			this->y = y;

			map = new char* [x];
			for (int i = 0;i < x;i++) map[i] = new char[y];
		}

		~Map_Exp() {
			for (int i = 0;i < x;i++) delete[] map[i];
			delete[] map;

			x = 0;
			y = 0;
		}
	};

	class Point_Exp {
	public:
		double x = 0;
		double y = 0;

		double dx = 0;
		double dy = 0;

		char sym;

		void set_pos(double x, double y) {
			this->x = x;
			this->y = y;
		}
		void set_move(double dx, double dy) {
			this->dx = dx;
			this->dy = dy;
		}

		void move() {
			x += dx;
			y += dy;
		}

		void stop() {
			dx = 0;
			dy = 0;
		}

	};

	 

}