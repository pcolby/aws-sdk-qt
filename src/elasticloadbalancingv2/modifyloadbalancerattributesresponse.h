// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "modifyloadbalancerattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyLoadBalancerAttributesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyLoadBalancerAttributesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    ModifyLoadBalancerAttributesResponse(const ModifyLoadBalancerAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyLoadBalancerAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLoadBalancerAttributesResponse)
    Q_DISABLE_COPY(ModifyLoadBalancerAttributesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
