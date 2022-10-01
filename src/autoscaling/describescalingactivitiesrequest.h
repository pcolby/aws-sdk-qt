// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGACTIVITIESREQUEST_H
#define QTAWS_DESCRIBESCALINGACTIVITIESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScalingActivitiesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeScalingActivitiesRequest : public AutoScalingRequest {

public:
    DescribeScalingActivitiesRequest(const DescribeScalingActivitiesRequest &other);
    DescribeScalingActivitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingActivitiesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
