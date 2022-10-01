// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEDNSNAMESPACEREQUEST_P_H
#define QTAWS_CREATEPRIVATEDNSNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "createprivatednsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePrivateDnsNamespaceRequest;

class CreatePrivateDnsNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    CreatePrivateDnsNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   CreatePrivateDnsNamespaceRequest * const q);
    CreatePrivateDnsNamespaceRequestPrivate(const CreatePrivateDnsNamespaceRequestPrivate &other,
                                   CreatePrivateDnsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePrivateDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
