typedef struct  vec2
{
    float x;
    float y;
}vec2_t;

typedef struct player
{
  vec2_t position;
  unsigned int n_lifes;
  unsigned int n_bombs;
  unsigned int speed;
  unsigned int score;
}player_t;

typedef struct bomb
{
    vec2_t position;
    unsigned int range;
    unsigned int cooldown;
}bombt_t;

enum cell_type{
    GROUND = 0,
    WALLL,
    UNDESTROYABLE_WALL,
    TELEPORT,
};
enum bonus_type{
    NONE = 0,
    SPEED,
    BOMB2,
    BOMB3,
};
enum enemy_type{
    BAT = 0,
    BALOON,
};
typedef struct cell
{
   enum cell_type type;
   enum bonus_type bonus;
}cell_t;

typedef struct enemy
{
   vec2_t position;
   enum enemy_type type;
}enemy_t;

typedef struct game_mode
{
  float timer;
}game_mode_t;
