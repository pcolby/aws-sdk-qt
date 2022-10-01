// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSREQUEST_P_H
#define QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "updateinstancecustomhealthstatusrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateInstanceCustomHealthStatusRequest;

class UpdateInstanceCustomHealthStatusRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    UpdateInstanceCustomHealthStatusRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   UpdateInstanceCustomHealthStatusRequest * const q);
    UpdateInstanceCustomHealthStatusRequestPrivate(const UpdateInstanceCustomHealthStatusRequestPrivate &other,
                                   UpdateInstanceCustomHealthStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceCustomHealthStatusRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
