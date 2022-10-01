// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describenotificationconfigurationsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeNotificationConfigurationsRequest;

class DescribeNotificationConfigurationsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeNotificationConfigurationsRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeNotificationConfigurationsRequest * const q);
    DescribeNotificationConfigurationsRequestPrivate(const DescribeNotificationConfigurationsRequestPrivate &other,
                                   DescribeNotificationConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationConfigurationsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
