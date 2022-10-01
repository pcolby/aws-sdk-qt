// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_P_H
#define QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeNotificationConfigurationsResponse;

class DescribeNotificationConfigurationsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeNotificationConfigurationsResponsePrivate(DescribeNotificationConfigurationsResponse * const q);

    void parseDescribeNotificationConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationConfigurationsResponse)
    Q_DISABLE_COPY(DescribeNotificationConfigurationsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
