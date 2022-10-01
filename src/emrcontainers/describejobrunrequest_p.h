// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRUNREQUEST_P_H
#define QTAWS_DESCRIBEJOBRUNREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "describejobrunrequest.h"

namespace QtAws {
namespace Emrcontainers {

class DescribeJobRunRequest;

class DescribeJobRunRequestPrivate : public EmrcontainersRequestPrivate {

public:
    DescribeJobRunRequestPrivate(const EmrcontainersRequest::Action action,
                                   DescribeJobRunRequest * const q);
    DescribeJobRunRequestPrivate(const DescribeJobRunRequestPrivate &other,
                                   DescribeJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobRunRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
