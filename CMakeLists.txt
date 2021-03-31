# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 2.6)

project(tvvr)

set(CMAKE_CXX_STANDARD 14)

include_directories(app/libs)

add_executable(tvvr main.cpp app/ui/presenter/banner_presenter.cpp app/ui/presenter/banner_presenter.hpp app/ui/presenter/contract.cpp app/ui/presenter/contract.hpp app/domain/entity/oc_error_type.hpp app/domain/entity/deploy_mode.hpp app/domain/usecase/get_deploy_mode_usecase.hpp app/domain/service/configuration_service.hpp app/infra/configuration_service_impl.cpp app/infra/configuration_service_impl.hpp)