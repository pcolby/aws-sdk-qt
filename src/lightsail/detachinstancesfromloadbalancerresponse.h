// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINSTANCESFROMLOADBALANCERRESPONSE_H
#define QTAWS_DETACHINSTANCESFROMLOADBALANCERRESPONSE_H

#include "lightsailresponse.h"
#include "detachinstancesfromloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachInstancesFromLoadBalancerResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DetachInstancesFromLoadBalancerResponse : public LightsailResponse {
    Q_OBJECT

public:
    DetachInstancesFromLoadBalancerResponse(const DetachInstancesFromLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachInstancesFromLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachInstancesFromLoadBalancerResponse)
    Q_DISABLE_COPY(DetachInstancesFromLoadBalancerResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
