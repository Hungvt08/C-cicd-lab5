cmake_minimum_required(VERSION 3.10)
project(CAutomationLab C)

# 1. Tự động tải thư viện Unity Testing từ GitHub
include(FetchContent)
FetchContent_Declare(
  unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG v2.5.2
)
FetchContent_MakeAvailable(unity)

# 2. Tạo thư viện từ mã nguồn C
add_library(calc_logic src/calculator.c)

# 3. Tạo file thực thi bài Test
add_executable(run_tests tests/test_calculator.c)

# 4. Liên kết bài Test với thư viện và Unity
target_link_libraries(run_tests calc_logic unity)

# 5. Đăng ký bài test với hệ thống
enable_testing()
add_test(NAME CalculatorTest COMMAND run_tests)
