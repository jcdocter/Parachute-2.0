#include <SDL3/SDL.h>

SDL_Window* window;
bool done = false;

static void StartViewport()
{
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Parachute game", 640, 480, SDL_WINDOW_OPENGL);
}

static void CloseViewport()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void EnableViewport()
{
    StartViewport();

    if (window == nullptr)
    {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
        return;
    }

    while (!done)
    {
        SDL_Event event;

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                done = true;
            }
        }
    }

    CloseViewport();
}