// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANRESOURCESREQUEST_H
#define QTAWS_DESCRIBESCALINGPLANRESOURCESREQUEST_H

#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlanResourcesRequestPrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT DescribeScalingPlanResourcesRequest : public AutoScalingPlansRequest {

public:
    DescribeScalingPlanResourcesRequest(const DescribeScalingPlanResourcesRequest &other);
    DescribeScalingPlanResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingPlanResourcesRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
