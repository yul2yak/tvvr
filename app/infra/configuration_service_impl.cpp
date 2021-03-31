#include "configuration_service_impl.hpp"

using namespace rxcpp;

observable<deploy_mode> configuration_service_impl::get_deploy_mode() {
    return observable<>::from(deploy_mode::DEV);
}
