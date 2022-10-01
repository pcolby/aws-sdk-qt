// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERTLSPOLICIESRESPONSE_H
#define QTAWS_GETLOADBALANCERTLSPOLICIESRESPONSE_H

#include "lightsailresponse.h"
#include "getloadbalancertlspoliciesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerTlsPoliciesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancerTlsPoliciesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetLoadBalancerTlsPoliciesResponse(const GetLoadBalancerTlsPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoadBalancerTlsPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancerTlsPoliciesResponse)
    Q_DISABLE_COPY(GetLoadBalancerTlsPoliciesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
