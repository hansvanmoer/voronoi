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


#include "edge_list.h"
#include "render.h"
#include "status.h"
#include "voronoi.h"

#include <stdio.h>
#include <stdlib.h>

static bool test_voronoi_diagram(){
  
  struct edge_list el;
  init_edge_list(&el);

  if(create_voronoi_diagram(&el, 10, 1000, 1000)){
    dispose_edge_list(&el);
    return true;
  }

  puts("result:");
  print_edge_list(&el);
  
  dispose_edge_list(&el);
  return false;
}

int main(int argc, const char * args[]){
  
  if(test_voronoi_diagram()){
    printf("an error occurred: '%s'", get_status_msg(get_status()));
    return EXIT_FAILURE;
  }
  
  return EXIT_SUCCESS;
}
