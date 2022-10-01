// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGINSTANCESRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOSCALINGINSTANCESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingInstancesResponse;

class DescribeAutoScalingInstancesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeAutoScalingInstancesResponsePrivate(DescribeAutoScalingInstancesResponse * const q);

    void parseDescribeAutoScalingInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingInstancesResponse)
    Q_DISABLE_COPY(DescribeAutoScalingInstancesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
