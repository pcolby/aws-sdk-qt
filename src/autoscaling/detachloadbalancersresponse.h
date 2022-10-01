// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERSRESPONSE_H
#define QTAWS_DETACHLOADBALANCERSRESPONSE_H

#include "autoscalingresponse.h"
#include "detachloadbalancersrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancersResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DetachLoadBalancersResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DetachLoadBalancersResponse(const DetachLoadBalancersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachLoadBalancersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachLoadBalancersResponse)
    Q_DISABLE_COPY(DetachLoadBalancersResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
