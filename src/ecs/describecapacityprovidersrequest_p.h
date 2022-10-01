// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYPROVIDERSREQUEST_P_H
#define QTAWS_DESCRIBECAPACITYPROVIDERSREQUEST_P_H

#include "ecsrequest_p.h"
#include "describecapacityprovidersrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeCapacityProvidersRequest;

class DescribeCapacityProvidersRequestPrivate : public EcsRequestPrivate {

public:
    DescribeCapacityProvidersRequestPrivate(const EcsRequest::Action action,
                                   DescribeCapacityProvidersRequest * const q);
    DescribeCapacityProvidersRequestPrivate(const DescribeCapacityProvidersRequestPrivate &other,
                                   DescribeCapacityProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCapacityProvidersRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
