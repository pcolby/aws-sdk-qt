// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSREQUEST_P_H
#define QTAWS_DESCRIBEJOBSREQUEST_P_H

#include "batchrequest_p.h"
#include "describejobsrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobsRequest;

class DescribeJobsRequestPrivate : public BatchRequestPrivate {

public:
    DescribeJobsRequestPrivate(const BatchRequest::Action action,
                                   DescribeJobsRequest * const q);
    DescribeJobsRequestPrivate(const DescribeJobsRequestPrivate &other,
                                   DescribeJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobsRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
