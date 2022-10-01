// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEREQUEST_P_H
#define QTAWS_CREATESERVICEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "createservicerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreateServiceRequest;

class CreateServiceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    CreateServiceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   CreateServiceRequest * const q);
    CreateServiceRequestPrivate(const CreateServiceRequestPrivate &other,
                                   CreateServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
