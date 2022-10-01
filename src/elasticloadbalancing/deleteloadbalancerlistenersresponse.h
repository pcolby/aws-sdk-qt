// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERLISTENERSRESPONSE_H
#define QTAWS_DELETELOADBALANCERLISTENERSRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "deleteloadbalancerlistenersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerListenersResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DeleteLoadBalancerListenersResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DeleteLoadBalancerListenersResponse(const DeleteLoadBalancerListenersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLoadBalancerListenersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerListenersResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerListenersResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
