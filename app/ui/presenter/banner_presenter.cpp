#include "banner_presenter.hpp"

using namespace rxcpp;

observable<deploy_mode> banner_presenter::getDeployMode() {
    return this->usecase->execute();
}
