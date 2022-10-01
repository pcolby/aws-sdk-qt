// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHELASTICLOADBALANCERRESPONSE_H
#define QTAWS_DETACHELASTICLOADBALANCERRESPONSE_H

#include "opsworksresponse.h"
#include "detachelasticloadbalancerrequest.h"

namespace QtAws {
namespace OpsWorks {

class DetachElasticLoadBalancerResponsePrivate;

class QTAWSOPSWORKS_EXPORT DetachElasticLoadBalancerResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DetachElasticLoadBalancerResponse(const DetachElasticLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachElasticLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachElasticLoadBalancerResponse)
    Q_DISABLE_COPY(DetachElasticLoadBalancerResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
