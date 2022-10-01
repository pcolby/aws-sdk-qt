// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPLANSREQUEST_H
#define QTAWS_DESCRIBESCALINGPLANSREQUEST_H

#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DescribeScalingPlansRequestPrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT DescribeScalingPlansRequest : public AutoScalingPlansRequest {

public:
    DescribeScalingPlansRequest(const DescribeScalingPlansRequest &other);
    DescribeScalingPlansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingPlansRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
