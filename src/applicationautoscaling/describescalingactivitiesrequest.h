// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGACTIVITIESREQUEST_H
#define QTAWS_DESCRIBESCALINGACTIVITIESREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalingActivitiesRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DescribeScalingActivitiesRequest : public ApplicationAutoScalingRequest {

public:
    DescribeScalingActivitiesRequest(const DescribeScalingActivitiesRequest &other);
    DescribeScalingActivitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingActivitiesRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
