// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHELASTICLOADBALANCERRESPONSE_H
#define QTAWS_ATTACHELASTICLOADBALANCERRESPONSE_H

#include "opsworksresponse.h"
#include "attachelasticloadbalancerrequest.h"

namespace QtAws {
namespace OpsWorks {

class AttachElasticLoadBalancerResponsePrivate;

class QTAWSOPSWORKS_EXPORT AttachElasticLoadBalancerResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    AttachElasticLoadBalancerResponse(const AttachElasticLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachElasticLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachElasticLoadBalancerResponse)
    Q_DISABLE_COPY(AttachElasticLoadBalancerResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
