// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESRESPONSE_P_H
#define QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingNotificationTypesResponse;

class DescribeAutoScalingNotificationTypesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeAutoScalingNotificationTypesResponsePrivate(DescribeAutoScalingNotificationTypesResponse * const q);

    void parseDescribeAutoScalingNotificationTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingNotificationTypesResponse)
    Q_DISABLE_COPY(DescribeAutoScalingNotificationTypesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
