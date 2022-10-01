// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERREQUEST_H
#define QTAWS_CREATELOADBALANCERREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateLoadBalancerRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT CreateLoadBalancerRequest : public ElasticLoadBalancingv2Request {

public:
    CreateLoadBalancerRequest(const CreateLoadBalancerRequest &other);
    CreateLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
