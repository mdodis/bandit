#include <SDL3/SDL.h>

int main(int argc, char **argv)
{
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        return -1;
    }
    return 0;
}
