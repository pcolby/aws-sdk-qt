// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPUTEENVIRONMENTSREQUEST_P_H
#define QTAWS_DESCRIBECOMPUTEENVIRONMENTSREQUEST_P_H

#include "batchrequest_p.h"
#include "describecomputeenvironmentsrequest.h"

namespace QtAws {
namespace Batch {

class DescribeComputeEnvironmentsRequest;

class DescribeComputeEnvironmentsRequestPrivate : public BatchRequestPrivate {

public:
    DescribeComputeEnvironmentsRequestPrivate(const BatchRequest::Action action,
                                   DescribeComputeEnvironmentsRequest * const q);
    DescribeComputeEnvironmentsRequestPrivate(const DescribeComputeEnvironmentsRequestPrivate &other,
                                   DescribeComputeEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComputeEnvironmentsRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
