// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANSREQUEST_P_H
#define QTAWS_DESCRIBESCALINGPLANSREQUEST_P_H

#include "autoscalingplansrequest_p.h"
#include "describescalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlansRequest;

class DescribeScalingPlansRequestPrivate : public AutoScalingPlansRequestPrivate {

public:
    DescribeScalingPlansRequestPrivate(const AutoScalingPlansRequest::Action action,
                                   DescribeScalingPlansRequest * const q);
    DescribeScalingPlansRequestPrivate(const DescribeScalingPlansRequestPrivate &other,
                                   DescribeScalingPlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScalingPlansRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
