// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERRESPONSE_H
#define QTAWS_DELETELOADBALANCERRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "deleteloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DeleteLoadBalancerResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DeleteLoadBalancerResponse(const DeleteLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
