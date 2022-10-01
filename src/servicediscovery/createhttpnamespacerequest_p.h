// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHTTPNAMESPACEREQUEST_P_H
#define QTAWS_CREATEHTTPNAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "createhttpnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreateHttpNamespaceRequest;

class CreateHttpNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    CreateHttpNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   CreateHttpNamespaceRequest * const q);
    CreateHttpNamespaceRequestPrivate(const CreateHttpNamespaceRequestPrivate &other,
                                   CreateHttpNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHttpNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
