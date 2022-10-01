// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULINGPOLICIESREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULINGPOLICIESREQUEST_P_H

#include "batchrequest_p.h"
#include "describeschedulingpoliciesrequest.h"

namespace QtAws {
namespace Batch {

class DescribeSchedulingPoliciesRequest;

class DescribeSchedulingPoliciesRequestPrivate : public BatchRequestPrivate {

public:
    DescribeSchedulingPoliciesRequestPrivate(const BatchRequest::Action action,
                                   DescribeSchedulingPoliciesRequest * const q);
    DescribeSchedulingPoliciesRequestPrivate(const DescribeSchedulingPoliciesRequestPrivate &other,
                                   DescribeSchedulingPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSchedulingPoliciesRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
