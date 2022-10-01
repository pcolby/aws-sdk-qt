// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERPOLICYRESPONSE_H
#define QTAWS_DELETELOADBALANCERPOLICYRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "deleteloadbalancerpolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerPolicyResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DeleteLoadBalancerPolicyResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DeleteLoadBalancerPolicyResponse(const DeleteLoadBalancerPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLoadBalancerPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerPolicyResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerPolicyResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
