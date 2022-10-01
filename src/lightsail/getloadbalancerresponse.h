// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERRESPONSE_H
#define QTAWS_GETLOADBALANCERRESPONSE_H

#include "lightsailresponse.h"
#include "getloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancerResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetLoadBalancerResponse(const GetLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancerResponse)
    Q_DISABLE_COPY(GetLoadBalancerResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
