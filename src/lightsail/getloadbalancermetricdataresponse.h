// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERMETRICDATARESPONSE_H
#define QTAWS_GETLOADBALANCERMETRICDATARESPONSE_H

#include "lightsailresponse.h"
#include "getloadbalancermetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerMetricDataResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancerMetricDataResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetLoadBalancerMetricDataResponse(const GetLoadBalancerMetricDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoadBalancerMetricDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancerMetricDataResponse)
    Q_DISABLE_COPY(GetLoadBalancerMetricDataResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
