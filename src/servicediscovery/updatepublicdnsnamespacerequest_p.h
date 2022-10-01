// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICDNSNAMESPACEREQUEST_P_H
#define QTAWS_UPDATEPUBLICDNSNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "updatepublicdnsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePublicDnsNamespaceRequest;

class UpdatePublicDnsNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    UpdatePublicDnsNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   UpdatePublicDnsNamespaceRequest * const q);
    UpdatePublicDnsNamespaceRequestPrivate(const UpdatePublicDnsNamespaceRequestPrivate &other,
                                   UpdatePublicDnsNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePublicDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
