// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBQUEUESREQUEST_P_H
#define QTAWS_DESCRIBEJOBQUEUESREQUEST_P_H

#include "batchrequest_p.h"
#include "describejobqueuesrequest.h"

namespace QtAws {
namespace Batch {

class DescribeJobQueuesRequest;

class DescribeJobQueuesRequestPrivate : public BatchRequestPrivate {

public:
    DescribeJobQueuesRequestPrivate(const BatchRequest::Action action,
                                   DescribeJobQueuesRequest * const q);
    DescribeJobQueuesRequestPrivate(const DescribeJobQueuesRequestPrivate &other,
                                   DescribeJobQueuesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobQueuesRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
