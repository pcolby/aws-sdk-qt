// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESHEALTHSTATUSREQUEST_P_H
#define QTAWS_GETINSTANCESHEALTHSTATUSREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "getinstanceshealthstatusrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetInstancesHealthStatusRequest;

class GetInstancesHealthStatusRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    GetInstancesHealthStatusRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   GetInstancesHealthStatusRequest * const q);
    GetInstancesHealthStatusRequestPrivate(const GetInstancesHealthStatusRequestPrivate &other,
                                   GetInstancesHealthStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstancesHealthStatusRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
