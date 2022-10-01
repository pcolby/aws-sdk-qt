// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELBCOOKIESTICKINESSPOLICYRESPONSE_H
#define QTAWS_CREATELBCOOKIESTICKINESSPOLICYRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "createlbcookiestickinesspolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLBCookieStickinessPolicyResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT CreateLBCookieStickinessPolicyResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    CreateLBCookieStickinessPolicyResponse(const CreateLBCookieStickinessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLBCookieStickinessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLBCookieStickinessPolicyResponse)
    Q_DISABLE_COPY(CreateLBCookieStickinessPolicyResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
