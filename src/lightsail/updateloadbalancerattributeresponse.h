// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOADBALANCERATTRIBUTERESPONSE_H
#define QTAWS_UPDATELOADBALANCERATTRIBUTERESPONSE_H

#include "lightsailresponse.h"
#include "updateloadbalancerattributerequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateLoadBalancerAttributeResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateLoadBalancerAttributeResponse : public LightsailResponse {
    Q_OBJECT

public:
    UpdateLoadBalancerAttributeResponse(const UpdateLoadBalancerAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLoadBalancerAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoadBalancerAttributeResponse)
    Q_DISABLE_COPY(UpdateLoadBalancerAttributeResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
