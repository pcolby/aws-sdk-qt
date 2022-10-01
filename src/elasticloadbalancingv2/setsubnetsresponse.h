// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBNETSRESPONSE_H
#define QTAWS_SETSUBNETSRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "setsubnetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetSubnetsResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT SetSubnetsResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    SetSubnetsResponse(const SetSubnetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetSubnetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSubnetsResponse)
    Q_DISABLE_COPY(SetSubnetsResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
