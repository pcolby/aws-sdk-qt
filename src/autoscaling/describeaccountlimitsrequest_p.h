// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeaccountlimitsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAccountLimitsRequest;

class DescribeAccountLimitsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeAccountLimitsRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeAccountLimitsRequest * const q);
    DescribeAccountLimitsRequestPrivate(const DescribeAccountLimitsRequestPrivate &other,
                                   DescribeAccountLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountLimitsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
