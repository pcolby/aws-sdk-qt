// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_H
#define QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "enableavailabilityzonesforloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class EnableAvailabilityZonesForLoadBalancerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT EnableAvailabilityZonesForLoadBalancerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    EnableAvailabilityZonesForLoadBalancerResponse(const EnableAvailabilityZonesForLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableAvailabilityZonesForLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAvailabilityZonesForLoadBalancerResponse)
    Q_DISABLE_COPY(EnableAvailabilityZonesForLoadBalancerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
