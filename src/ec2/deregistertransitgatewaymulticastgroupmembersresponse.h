// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_H

#include "ec2response.h"
#include "deregistertransitgatewaymulticastgroupmembersrequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupMembersResponsePrivate;

class QTAWSEC2_EXPORT DeregisterTransitGatewayMulticastGroupMembersResponse : public Ec2Response {
    Q_OBJECT

public:
    DeregisterTransitGatewayMulticastGroupMembersResponse(const DeregisterTransitGatewayMulticastGroupMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTransitGatewayMulticastGroupMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTransitGatewayMulticastGroupMembersResponse)
    Q_DISABLE_COPY(DeregisterTransitGatewayMulticastGroupMembersResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
