// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYRESPONSE_P_H
#define QTAWS_CREATEAPPCOOKIESTICKINESSPOLICYRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateAppCookieStickinessPolicyResponse;

class CreateAppCookieStickinessPolicyResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit CreateAppCookieStickinessPolicyResponsePrivate(CreateAppCookieStickinessPolicyResponse * const q);

    void parseCreateAppCookieStickinessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAppCookieStickinessPolicyResponse)
    Q_DISABLE_COPY(CreateAppCookieStickinessPolicyResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
