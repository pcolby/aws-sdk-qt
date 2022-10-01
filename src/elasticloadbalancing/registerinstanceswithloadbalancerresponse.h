// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCESWITHLOADBALANCERRESPONSE_H
#define QTAWS_REGISTERINSTANCESWITHLOADBALANCERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "registerinstanceswithloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class RegisterInstancesWithLoadBalancerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT RegisterInstancesWithLoadBalancerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    RegisterInstancesWithLoadBalancerResponse(const RegisterInstancesWithLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterInstancesWithLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterInstancesWithLoadBalancerResponse)
    Q_DISABLE_COPY(RegisterInstancesWithLoadBalancerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
