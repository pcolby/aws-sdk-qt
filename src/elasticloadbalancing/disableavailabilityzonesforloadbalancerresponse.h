// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_H
#define QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "disableavailabilityzonesforloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DisableAvailabilityZonesForLoadBalancerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DisableAvailabilityZonesForLoadBalancerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DisableAvailabilityZonesForLoadBalancerResponse(const DisableAvailabilityZonesForLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableAvailabilityZonesForLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAvailabilityZonesForLoadBalancerResponse)
    Q_DISABLE_COPY(DisableAvailabilityZonesForLoadBalancerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
