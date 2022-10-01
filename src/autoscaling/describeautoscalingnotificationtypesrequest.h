// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESREQUEST_H
#define QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingNotificationTypesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAutoScalingNotificationTypesRequest : public AutoScalingRequest {

public:
    DescribeAutoScalingNotificationTypesRequest(const DescribeAutoScalingNotificationTypesRequest &other);
    DescribeAutoScalingNotificationTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingNotificationTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
