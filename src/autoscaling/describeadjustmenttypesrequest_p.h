// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADJUSTMENTTYPESREQUEST_P_H
#define QTAWS_DESCRIBEADJUSTMENTTYPESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeadjustmenttypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAdjustmentTypesRequest;

class DescribeAdjustmentTypesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeAdjustmentTypesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeAdjustmentTypesRequest * const q);
    DescribeAdjustmentTypesRequestPrivate(const DescribeAdjustmentTypesRequestPrivate &other,
                                   DescribeAdjustmentTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAdjustmentTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
