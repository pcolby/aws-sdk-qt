// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICDNSNAMESPACEREQUEST_P_H
#define QTAWS_CREATEPUBLICDNSNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "createpublicdnsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePublicDnsNamespaceRequest;

class CreatePublicDnsNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    CreatePublicDnsNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   CreatePublicDnsNamespaceRequest * const q);
    CreatePublicDnsNamespaceRequestPrivate(const CreatePublicDnsNamespaceRequestPrivate &other,
                                   CreatePublicDnsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePublicDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
