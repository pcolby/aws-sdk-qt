// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCESWITHLOADBALANCERREQUEST_H
#define QTAWS_REGISTERINSTANCESWITHLOADBALANCERREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class RegisterInstancesWithLoadBalancerRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT RegisterInstancesWithLoadBalancerRequest : public ElasticLoadBalancingRequest {

public:
    RegisterInstancesWithLoadBalancerRequest(const RegisterInstancesWithLoadBalancerRequest &other);
    RegisterInstancesWithLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterInstancesWithLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
