// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOSCALINGGROUPSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingGroupsResponse;

class DescribeAutoScalingGroupsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeAutoScalingGroupsResponsePrivate(DescribeAutoScalingGroupsResponse * const q);

    void parseDescribeAutoScalingGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingGroupsResponse)
    Q_DISABLE_COPY(DescribeAutoScalingGroupsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
