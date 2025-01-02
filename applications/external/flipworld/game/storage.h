#pragma once
#include <game/player.h>
#include <game/game.h>
#include <flip_world.h>
#include <flip_storage/storage.h>

bool save_player_context(PlayerContext* player_context);
bool load_player_context(PlayerContext* player_context);

// save the json_data and enemy_data to separate files
bool separate_world_data(char* id, FuriString* world_data);
