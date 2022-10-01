// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describescheduledactionsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScheduledActionsRequest;

class DescribeScheduledActionsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeScheduledActionsRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeScheduledActionsRequest * const q);
    DescribeScheduledActionsRequestPrivate(const DescribeScheduledActionsRequestPrivate &other,
                                   DescribeScheduledActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledActionsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
