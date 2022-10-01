// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERMETRICDATAREQUEST_H
#define QTAWS_GETLOADBALANCERMETRICDATAREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerMetricDataRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancerMetricDataRequest : public LightsailRequest {

public:
    GetLoadBalancerMetricDataRequest(const GetLoadBalancerMetricDataRequest &other);
    GetLoadBalancerMetricDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancerMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
