// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMANAGEDENDPOINTREQUEST_P_H
#define QTAWS_DELETEMANAGEDENDPOINTREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "deletemanagedendpointrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DeleteManagedEndpointRequest;

class DeleteManagedEndpointRequestPrivate : public EmrcontainersRequestPrivate {

public:
    DeleteManagedEndpointRequestPrivate(const EmrcontainersRequest::Action action,
                                   DeleteManagedEndpointRequest * const q);
    DeleteManagedEndpointRequestPrivate(const DeleteManagedEndpointRequestPrivate &other,
                                   DeleteManagedEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteManagedEndpointRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
