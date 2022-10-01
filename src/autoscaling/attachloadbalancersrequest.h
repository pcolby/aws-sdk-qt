// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERSREQUEST_H
#define QTAWS_ATTACHLOADBALANCERSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancersRequestPrivate;

class QTAWSAUTOSCALING_EXPORT AttachLoadBalancersRequest : public AutoScalingRequest {

public:
    AttachLoadBalancersRequest(const AttachLoadBalancersRequest &other);
    AttachLoadBalancersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachLoadBalancersRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
