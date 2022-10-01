// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCESFROMLOADBALANCERRESPONSE_H
#define QTAWS_DEREGISTERINSTANCESFROMLOADBALANCERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "deregisterinstancesfromloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeregisterInstancesFromLoadBalancerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DeregisterInstancesFromLoadBalancerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DeregisterInstancesFromLoadBalancerResponse(const DeregisterInstancesFromLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterInstancesFromLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterInstancesFromLoadBalancerResponse)
    Q_DISABLE_COPY(DeregisterInstancesFromLoadBalancerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
