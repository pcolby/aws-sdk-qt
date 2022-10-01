// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERPOLICYREQUEST_H
#define QTAWS_CREATELOADBALANCERPOLICYREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerPolicyRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT CreateLoadBalancerPolicyRequest : public ElasticLoadBalancingRequest {

public:
    CreateLoadBalancerPolicyRequest(const CreateLoadBalancerPolicyRequest &other);
    CreateLoadBalancerPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
