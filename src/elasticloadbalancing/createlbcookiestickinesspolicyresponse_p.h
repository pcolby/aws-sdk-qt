// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELBCOOKIESTICKINESSPOLICYRESPONSE_P_H
#define QTAWS_CREATELBCOOKIESTICKINESSPOLICYRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLBCookieStickinessPolicyResponse;

class CreateLBCookieStickinessPolicyResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit CreateLBCookieStickinessPolicyResponsePrivate(CreateLBCookieStickinessPolicyResponse * const q);

    void parseCreateLBCookieStickinessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLBCookieStickinessPolicyResponse)
    Q_DISABLE_COPY(CreateLBCookieStickinessPolicyResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
