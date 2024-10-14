//
//  EmeraldDeviceFilterList.cpp
//  EmeraldSDHC Device Sorting Table.
//
//  Copyright © 2021-2023 Goldfish64. All rights reserved.
//

#include "EmeraldSDHC.hpp"

#define ESDHC_DEV_ACPI(hid, uid, devtype) \
    { \
      .acpi_hid = hid, \
      .acpi_uid = uid, \
      .device_type = devtype, \
    } \

EmeraldDeviceFilterListEntry EmeraldDeviceFilterTable[] = {
    ESDHC_DEV_ACPI("80865ACA", nullptr, EmeraldDeviceType::GenericSD),
} 