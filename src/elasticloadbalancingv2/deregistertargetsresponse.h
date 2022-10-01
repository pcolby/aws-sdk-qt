// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTARGETSRESPONSE_H
#define QTAWS_DEREGISTERTARGETSRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "deregistertargetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeregisterTargetsResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT DeregisterTargetsResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    DeregisterTargetsResponse(const DeregisterTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTargetsResponse)
    Q_DISABLE_COPY(DeregisterTargetsResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
