// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMESPACEREQUEST_P_H
#define QTAWS_DELETENAMESPACEREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "deletenamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeleteNamespaceRequest;

class DeleteNamespaceRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    DeleteNamespaceRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   DeleteNamespaceRequest * const q);
    DeleteNamespaceRequestPrivate(const DeleteNamespaceRequestPrivate &other,
                                   DeleteNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
