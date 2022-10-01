// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMANAGEDENDPOINTREQUEST_P_H
#define QTAWS_DESCRIBEMANAGEDENDPOINTREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "describemanagedendpointrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeManagedEndpointRequest;

class DescribeManagedEndpointRequestPrivate : public EmrcontainersRequestPrivate {

public:
    DescribeManagedEndpointRequestPrivate(const EmrcontainersRequest::Action action,
                                   DescribeManagedEndpointRequest * const q);
    DescribeManagedEndpointRequestPrivate(const DescribeManagedEndpointRequestPrivate &other,
                                   DescribeManagedEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeManagedEndpointRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
