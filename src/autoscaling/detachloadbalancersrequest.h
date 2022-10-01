// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERSREQUEST_H
#define QTAWS_DETACHLOADBALANCERSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancersRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DetachLoadBalancersRequest : public AutoScalingRequest {

public:
    DetachLoadBalancersRequest(const DetachLoadBalancersRequest &other);
    DetachLoadBalancersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachLoadBalancersRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
