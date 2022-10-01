// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEREQUEST_P_H
#define QTAWS_GETSERVICEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "getservicerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetServiceRequest;

class GetServiceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    GetServiceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   GetServiceRequest * const q);
    GetServiceRequestPrivate(const GetServiceRequestPrivate &other,
                                   GetServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
