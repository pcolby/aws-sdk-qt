// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERREQUEST_H
#define QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerPoliciesForBackendServerRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT SetLoadBalancerPoliciesForBackendServerRequest : public ElasticLoadBalancingRequest {

public:
    SetLoadBalancerPoliciesForBackendServerRequest(const SetLoadBalancerPoliciesForBackendServerRequest &other);
    SetLoadBalancerPoliciesForBackendServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoadBalancerPoliciesForBackendServerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
