// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKSREQUEST_P_H
#define QTAWS_DESCRIBETASKSREQUEST_P_H

#include "ecsrequest_p.h"
#include "describetasksrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeTasksRequest;

class DescribeTasksRequestPrivate : public EcsRequestPrivate {

public:
    DescribeTasksRequestPrivate(const EcsRequest::Action action,
                                   DescribeTasksRequest * const q);
    DescribeTasksRequestPrivate(const DescribeTasksRequestPrivate &other,
                                   DescribeTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTasksRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
