// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEREQUEST_P_H
#define QTAWS_DELETESERVICEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "deleteservicerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeleteServiceRequest;

class DeleteServiceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    DeleteServiceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   DeleteServiceRequest * const q);
    DeleteServiceRequestPrivate(const DeleteServiceRequestPrivate &other,
                                   DeleteServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
