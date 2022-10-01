// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_H
#define QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DisableAvailabilityZonesForLoadBalancerRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DisableAvailabilityZonesForLoadBalancerRequest : public ElasticLoadBalancingRequest {

public:
    DisableAvailabilityZonesForLoadBalancerRequest(const DisableAvailabilityZonesForLoadBalancerRequest &other);
    DisableAvailabilityZonesForLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAvailabilityZonesForLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
