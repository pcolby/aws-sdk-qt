// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_H
#define QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class EnableAvailabilityZonesForLoadBalancerRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT EnableAvailabilityZonesForLoadBalancerRequest : public ElasticLoadBalancingRequest {

public:
    EnableAvailabilityZonesForLoadBalancerRequest(const EnableAvailabilityZonesForLoadBalancerRequest &other);
    EnableAvailabilityZonesForLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAvailabilityZonesForLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
