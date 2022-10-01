// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERRESPONSE_H
#define QTAWS_CREATELOADBALANCERRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "createloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateLoadBalancerResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT CreateLoadBalancerResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    CreateLoadBalancerResponse(const CreateLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerResponse)
    Q_DISABLE_COPY(CreateLoadBalancerResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
