// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRAFFICPOLICYINSTANCERESPONSE_H
#define QTAWS_GETTRAFFICPOLICYINSTANCERESPONSE_H

#include "route53response.h"
#include "gettrafficpolicyinstancerequest.h"

namespace QtAws {
namespace Route53 {

class GetTrafficPolicyInstanceResponsePrivate;

class QTAWSROUTE53_EXPORT GetTrafficPolicyInstanceResponse : public Route53Response {
    Q_OBJECT

public:
    GetTrafficPolicyInstanceResponse(const GetTrafficPolicyInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrafficPolicyInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrafficPolicyInstanceResponse)
    Q_DISABLE_COPY(GetTrafficPolicyInstanceResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
