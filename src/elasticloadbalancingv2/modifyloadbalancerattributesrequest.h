// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESREQUEST_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyLoadBalancerAttributesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyLoadBalancerAttributesRequest : public ElasticLoadBalancingv2Request {

public:
    ModifyLoadBalancerAttributesRequest(const ModifyLoadBalancerAttributesRequest &other);
    ModifyLoadBalancerAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLoadBalancerAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
