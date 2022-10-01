// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCECONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEVPCECONFIGURATIONREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deletevpceconfigurationrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteVPCEConfigurationRequest;

class DeleteVPCEConfigurationRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteVPCEConfigurationRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteVPCEConfigurationRequest * const q);
    DeleteVPCEConfigurationRequestPrivate(const DeleteVPCEConfigurationRequestPrivate &other,
                                   DeleteVPCEConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
