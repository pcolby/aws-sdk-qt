// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYRESPONSE_H
#define QTAWS_GETTRAFFICPOLICYRESPONSE_H

#include "route53response.h"
#include "gettrafficpolicyrequest.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyResponsePrivate;

class QTAWSROUTE53_EXPORT GetTrafficPolicyResponse : public Route53Response {
    Q_OBJECT

public:
    GetTrafficPolicyResponse(const GetTrafficPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrafficPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrafficPolicyResponse)
    Q_DISABLE_COPY(GetTrafficPolicyResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
