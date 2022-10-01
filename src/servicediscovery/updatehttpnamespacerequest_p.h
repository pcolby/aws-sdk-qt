// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHTTPNAMESPACEREQUEST_P_H
#define QTAWS_UPDATEHTTPNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "updatehttpnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateHttpNamespaceRequest;

class UpdateHttpNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    UpdateHttpNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   UpdateHttpNamespaceRequest * const q);
    UpdateHttpNamespaceRequestPrivate(const UpdateHttpNamespaceRequestPrivate &other,
                                   UpdateHttpNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHttpNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
