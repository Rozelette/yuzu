// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

namespace Service {
namespace Set {

class SET final : public ServiceFramework<SET> {
public:
    explicit SET(const char* name);
    ~SET() = default;

private:
    void GetAvailableLanguageCodes(Kernel::HLERequestContext& ctx);
};

/// Registers all Set services with the specified service manager.
void InstallInterfaces(SM::ServiceManager& service_manager);

} // namespace Set
} // namespace Service
