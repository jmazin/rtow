# Ray Tracing in One Weekend

### Install CMake

- Install CMake (on mac: `brew install cmake`)

### Create a project (only have to this once)

- `cmake -B build`

### Build project and Create an image

- Build project: `cmake --build build`
- Create image: `build/inOneWeekend > image.ppm`
- Open file (on mac): `open image.ppm`

- In one line: `cmake --build build; build/inOneWeekend > image.ppm; open image.ppm`
