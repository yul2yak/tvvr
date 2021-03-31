#include <iostream>
#include "app/domain/entity/deploy_mode.hpp"
#include "app/domain/usecase/get_deploy_mode_usecase.hpp"
#include "app/ui/presenter/banner_presenter.hpp"
#include "app/infra/configuration_service_impl.hpp"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto service = make_unique<configuration_service_impl>();
    auto usecase = make_unique<get_deploy_mode_usecase>(service.get());
    auto presenter = make_unique<banner_presenter>(usecase.get());
    presenter->getDeployMode()
            .subscribe([](deploy_mode mode){ cout << "isPrd=" << (mode == deploy_mode::PRD) << endl; });
    return 0;
}
