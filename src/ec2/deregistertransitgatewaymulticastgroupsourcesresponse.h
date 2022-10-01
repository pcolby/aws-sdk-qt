// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_H

#include "ec2response.h"
#include "deregistertransitgatewaymulticastgroupsourcesrequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupSourcesResponsePrivate;

class QTAWSEC2_EXPORT DeregisterTransitGatewayMulticastGroupSourcesResponse : public Ec2Response {
    Q_OBJECT

public:
    DeregisterTransitGatewayMulticastGroupSourcesResponse(const DeregisterTransitGatewayMulticastGroupSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTransitGatewayMulticastGroupSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTransitGatewayMulticastGroupSourcesResponse)
    Q_DISABLE_COPY(DeregisterTransitGatewayMulticastGroupSourcesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
