// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERSRESPONSE_H
#define QTAWS_GETLOADBALANCERSRESPONSE_H

#include "lightsailresponse.h"
#include "getloadbalancersrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancersResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancersResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetLoadBalancersResponse(const GetLoadBalancersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoadBalancersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancersResponse)
    Q_DISABLE_COPY(GetLoadBalancersResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
