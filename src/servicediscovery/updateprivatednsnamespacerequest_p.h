// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIVATEDNSNAMESPACEREQUEST_P_H
#define QTAWS_UPDATEPRIVATEDNSNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "updateprivatednsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePrivateDnsNamespaceRequest;

class UpdatePrivateDnsNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    UpdatePrivateDnsNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   UpdatePrivateDnsNamespaceRequest * const q);
    UpdatePrivateDnsNamespaceRequestPrivate(const UpdatePrivateDnsNamespaceRequestPrivate &other,
                                   UpdatePrivateDnsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePrivateDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
