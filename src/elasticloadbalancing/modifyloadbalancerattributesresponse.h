// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "modifyloadbalancerattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ModifyLoadBalancerAttributesResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT ModifyLoadBalancerAttributesResponse : public ElasticLoadBalancingResponse {
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

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
