// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETSRESPONSE_H
#define QTAWS_REGISTERTARGETSRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "registertargetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RegisterTargetsResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT RegisterTargetsResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    RegisterTargetsResponse(const RegisterTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTargetsResponse)
    Q_DISABLE_COPY(RegisterTargetsResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
