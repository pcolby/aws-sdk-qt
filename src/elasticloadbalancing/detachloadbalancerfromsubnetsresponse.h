// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERFROMSUBNETSRESPONSE_H
#define QTAWS_DETACHLOADBALANCERFROMSUBNETSRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "detachloadbalancerfromsubnetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DetachLoadBalancerFromSubnetsResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DetachLoadBalancerFromSubnetsResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DetachLoadBalancerFromSubnetsResponse(const DetachLoadBalancerFromSubnetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachLoadBalancerFromSubnetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachLoadBalancerFromSubnetsResponse)
    Q_DISABLE_COPY(DetachLoadBalancerFromSubnetsResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
