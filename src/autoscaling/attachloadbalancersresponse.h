// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERSRESPONSE_H
#define QTAWS_ATTACHLOADBALANCERSRESPONSE_H

#include "autoscalingresponse.h"
#include "attachloadbalancersrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancersResponsePrivate;

class QTAWSAUTOSCALING_EXPORT AttachLoadBalancersResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    AttachLoadBalancersResponse(const AttachLoadBalancersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachLoadBalancersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachLoadBalancersResponse)
    Q_DISABLE_COPY(AttachLoadBalancersResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
