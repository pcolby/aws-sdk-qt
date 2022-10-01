// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCECONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEVPCECONFIGURATIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createvpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateVPCEConfigurationRequest;

class CreateVPCEConfigurationRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateVPCEConfigurationRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateVPCEConfigurationRequest * const q);
    CreateVPCEConfigurationRequestPrivate(const CreateVPCEConfigurationRequestPrivate &other,
                                   CreateVPCEConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
