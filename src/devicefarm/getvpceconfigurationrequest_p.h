// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCECONFIGURATIONREQUEST_P_H
#define QTAWS_GETVPCECONFIGURATIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getvpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetVPCEConfigurationRequest;

class GetVPCEConfigurationRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetVPCEConfigurationRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetVPCEConfigurationRequest * const q);
    GetVPCEConfigurationRequestPrivate(const GetVPCEConfigurationRequestPrivate &other,
                                   GetVPCEConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
