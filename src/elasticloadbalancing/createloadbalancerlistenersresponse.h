// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERLISTENERSRESPONSE_H
#define QTAWS_CREATELOADBALANCERLISTENERSRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "createloadbalancerlistenersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerListenersResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT CreateLoadBalancerListenersResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    CreateLoadBalancerListenersResponse(const CreateLoadBalancerListenersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoadBalancerListenersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoadBalancerListenersResponse)
    Q_DISABLE_COPY(CreateLoadBalancerListenersResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
