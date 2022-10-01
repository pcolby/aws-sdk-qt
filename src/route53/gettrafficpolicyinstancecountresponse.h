// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCECOUNTRESPONSE_H
#define QTAWS_GETTRAFFICPOLICYINSTANCECOUNTRESPONSE_H

#include "route53response.h"
#include "gettrafficpolicyinstancecountrequest.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceCountResponsePrivate;

class QTAWSROUTE53_EXPORT GetTrafficPolicyInstanceCountResponse : public Route53Response {
    Q_OBJECT

public:
    GetTrafficPolicyInstanceCountResponse(const GetTrafficPolicyInstanceCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrafficPolicyInstanceCountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrafficPolicyInstanceCountResponse)
    Q_DISABLE_COPY(GetTrafficPolicyInstanceCountResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
