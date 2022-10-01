// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMANAGEDENDPOINTREQUEST_P_H
#define QTAWS_CREATEMANAGEDENDPOINTREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "createmanagedendpointrequest.h"

namespace QtAws {
namespace Emrcontainers {

class CreateManagedEndpointRequest;

class CreateManagedEndpointRequestPrivate : public EmrcontainersRequestPrivate {

public:
    CreateManagedEndpointRequestPrivate(const EmrcontainersRequest::Action action,
                                   CreateManagedEndpointRequest * const q);
    CreateManagedEndpointRequestPrivate(const CreateManagedEndpointRequestPrivate &other,
                                   CreateManagedEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateManagedEndpointRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
