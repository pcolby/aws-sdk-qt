// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGGROUPSREQUEST_H
#define QTAWS_DESCRIBEAUTOSCALINGGROUPSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingGroupsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAutoScalingGroupsRequest : public AutoScalingRequest {

public:
    DescribeAutoScalingGroupsRequest(const DescribeAutoScalingGroupsRequest &other);
    DescribeAutoScalingGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
