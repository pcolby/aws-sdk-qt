// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEVPCECONFIGURATIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "updatevpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateVPCEConfigurationRequest;

class UpdateVPCEConfigurationRequestPrivate : public DeviceFarmRequestPrivate {

public:
    UpdateVPCEConfigurationRequestPrivate(const DeviceFarmRequest::Action action,
                                   UpdateVPCEConfigurationRequest * const q);
    UpdateVPCEConfigurationRequestPrivate(const UpdateVPCEConfigurationRequestPrivate &other,
                                   UpdateVPCEConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
