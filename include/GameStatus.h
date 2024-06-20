typedef enum GameStatus GameStatus;
enum GameStatus
{
    UNKNOWN,
    OKAY,
    ERROR,
    EXIT
};

static GameStatus status = UNKNOWN;