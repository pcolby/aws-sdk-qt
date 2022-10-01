// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPOLICIESREQUEST_H
#define QTAWS_DESCRIBESCALINGPOLICIESREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalingPoliciesRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DescribeScalingPoliciesRequest : public ApplicationAutoScalingRequest {

public:
    DescribeScalingPoliciesRequest(const DescribeScalingPoliciesRequest &other);
    DescribeScalingPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingPoliciesRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
