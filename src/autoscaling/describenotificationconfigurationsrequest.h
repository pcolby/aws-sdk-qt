// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBENOTIFICATIONCONFIGURATIONSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeNotificationConfigurationsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeNotificationConfigurationsRequest : public AutoScalingRequest {

public:
    DescribeNotificationConfigurationsRequest(const DescribeNotificationConfigurationsRequest &other);
    DescribeNotificationConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotificationConfigurationsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
