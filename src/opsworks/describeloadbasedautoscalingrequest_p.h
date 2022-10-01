// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBASEDAUTOSCALINGREQUEST_P_H
#define QTAWS_DESCRIBELOADBASEDAUTOSCALINGREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeloadbasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLoadBasedAutoScalingRequest;

class DescribeLoadBasedAutoScalingRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeLoadBasedAutoScalingRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeLoadBasedAutoScalingRequest * const q);
    DescribeLoadBasedAutoScalingRequestPrivate(const DescribeLoadBasedAutoScalingRequestPrivate &other,
                                   DescribeLoadBasedAutoScalingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBasedAutoScalingRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
