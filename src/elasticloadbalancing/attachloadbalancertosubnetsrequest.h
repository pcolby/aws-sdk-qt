// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTOSUBNETSREQUEST_H
#define QTAWS_ATTACHLOADBALANCERTOSUBNETSREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class AttachLoadBalancerToSubnetsRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT AttachLoadBalancerToSubnetsRequest : public ElasticLoadBalancingRequest {

public:
    AttachLoadBalancerToSubnetsRequest(const AttachLoadBalancerToSubnetsRequest &other);
    AttachLoadBalancerToSubnetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachLoadBalancerToSubnetsRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
