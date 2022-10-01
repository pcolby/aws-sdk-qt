// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYRESPONSE_H
#define QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "createappcookiestickinesspolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateAppCookieStickinessPolicyResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT CreateAppCookieStickinessPolicyResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    CreateAppCookieStickinessPolicyResponse(const CreateAppCookieStickinessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAppCookieStickinessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppCookieStickinessPolicyResponse)
    Q_DISABLE_COPY(CreateAppCookieStickinessPolicyResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
