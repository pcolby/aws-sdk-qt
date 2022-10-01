// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESREQUEST_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ModifyLoadBalancerAttributesRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT ModifyLoadBalancerAttributesRequest : public ElasticLoadBalancingRequest {

public:
    ModifyLoadBalancerAttributesRequest(const ModifyLoadBalancerAttributesRequest &other);
    ModifyLoadBalancerAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLoadBalancerAttributesRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
