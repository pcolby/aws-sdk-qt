// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERFROMSUBNETSREQUEST_H
#define QTAWS_DETACHLOADBALANCERFROMSUBNETSREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DetachLoadBalancerFromSubnetsRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DetachLoadBalancerFromSubnetsRequest : public ElasticLoadBalancingRequest {

public:
    DetachLoadBalancerFromSubnetsRequest(const DetachLoadBalancerFromSubnetsRequest &other);
    DetachLoadBalancerFromSubnetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachLoadBalancerFromSubnetsRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
