// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMEBASEDAUTOSCALINGREQUEST_P_H
#define QTAWS_DESCRIBETIMEBASEDAUTOSCALINGREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describetimebasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeTimeBasedAutoScalingRequest;

class DescribeTimeBasedAutoScalingRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeTimeBasedAutoScalingRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeTimeBasedAutoScalingRequest * const q);
    DescribeTimeBasedAutoScalingRequestPrivate(const DescribeTimeBasedAutoScalingRequestPrivate &other,
                                   DescribeTimeBasedAutoScalingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTimeBasedAutoScalingRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
