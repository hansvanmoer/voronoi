/*
 * This file is part of game.
 *
 * game is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *    game is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with game.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include <stdlib.h>

double rand_double_range(double min, double max){
  if(min > max){
    double tmp = min;
    min = max;
    max = tmp;
  }
  double r = (double)rand() / RAND_MAX;
  return min + r * (max - min);
}
