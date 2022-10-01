// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBECONTAINERINSTANCESREQUEST_P_H

#include "ecsrequest_p.h"
#include "describecontainerinstancesrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeContainerInstancesRequest;

class DescribeContainerInstancesRequestPrivate : public EcsRequestPrivate {

public:
    DescribeContainerInstancesRequestPrivate(const EcsRequest::Action action,
                                   DescribeContainerInstancesRequest * const q);
    DescribeContainerInstancesRequestPrivate(const DescribeContainerInstancesRequestPrivate &other,
                                   DescribeContainerInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContainerInstancesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
