// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEREQUEST_P_H
#define QTAWS_DEREGISTERINSTANCEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "deregisterinstancerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeregisterInstanceRequest;

class DeregisterInstanceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    DeregisterInstanceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   DeregisterInstanceRequest * const q);
    DeregisterInstanceRequestPrivate(const DeregisterInstanceRequestPrivate &other,
                                   DeregisterInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterInstanceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
