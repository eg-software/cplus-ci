# cplus-ci

Простой C++ проект с CI/CD через GitHub Actions.

## Локальный запуск

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
./build/cplus_app
ctest --test-dir build --output-on-failure
```

На Windows запуск бинарника:

```powershell
.\build\Release\cplus_app.exe
```

## CI/CD

Workflow: `.github/workflows/ci.yml`

- **build**: сборка на Ubuntu и Windows;
- **test**: запуск теста через `ctest`;
- **publish**: создание GitHub Release при пуше тега вида `v*`.
