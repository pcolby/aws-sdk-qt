// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERPOLICYRESPONSE_H
#define QTAWS_CREATELOADBALANCERPOLICYRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "createloadbalancerpolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerPolicyResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT CreateLoadBalancerPolicyResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    CreateLoadBalancerPolicyResponse(const CreateLoadBalancerPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoadBalancerPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerPolicyResponse)
    Q_DISABLE_COPY(CreateLoadBalancerPolicyResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
