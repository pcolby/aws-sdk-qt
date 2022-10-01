// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKSETSREQUEST_P_H
#define QTAWS_DESCRIBETASKSETSREQUEST_P_H

#include "ecsrequest_p.h"
#include "describetasksetsrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeTaskSetsRequest;

class DescribeTaskSetsRequestPrivate : public EcsRequestPrivate {

public:
    DescribeTaskSetsRequestPrivate(const EcsRequest::Action action,
                                   DescribeTaskSetsRequest * const q);
    DescribeTaskSetsRequestPrivate(const DescribeTaskSetsRequestPrivate &other,
                                   DescribeTaskSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTaskSetsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
