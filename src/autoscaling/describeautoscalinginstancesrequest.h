// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGINSTANCESREQUEST_H
#define QTAWS_DESCRIBEAUTOSCALINGINSTANCESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingInstancesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAutoScalingInstancesRequest : public AutoScalingRequest {

public:
    DescribeAutoScalingInstancesRequest(const DescribeAutoScalingInstancesRequest &other);
    DescribeAutoScalingInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoScalingInstancesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
