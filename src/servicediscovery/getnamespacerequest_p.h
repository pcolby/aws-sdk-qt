// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEREQUEST_P_H
#define QTAWS_GETNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "getnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetNamespaceRequest;

class GetNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    GetNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   GetNamespaceRequest * const q);
    GetNamespaceRequestPrivate(const GetNamespaceRequestPrivate &other,
                                   GetNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
