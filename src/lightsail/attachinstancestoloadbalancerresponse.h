// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESTOLOADBALANCERRESPONSE_H
#define QTAWS_ATTACHINSTANCESTOLOADBALANCERRESPONSE_H

#include "lightsailresponse.h"
#include "attachinstancestoloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachInstancesToLoadBalancerResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT AttachInstancesToLoadBalancerResponse : public LightsailResponse {
    Q_OBJECT

public:
    AttachInstancesToLoadBalancerResponse(const AttachInstancesToLoadBalancerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachInstancesToLoadBalancerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachInstancesToLoadBalancerResponse)
    Q_DISABLE_COPY(AttachInstancesToLoadBalancerResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
