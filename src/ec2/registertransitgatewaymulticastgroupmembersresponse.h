// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_H
#define QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSRESPONSE_H

#include "ec2response.h"
#include "registertransitgatewaymulticastgroupmembersrequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterTransitGatewayMulticastGroupMembersResponsePrivate;

class QTAWSEC2_EXPORT RegisterTransitGatewayMulticastGroupMembersResponse : public Ec2Response {
    Q_OBJECT

public:
    RegisterTransitGatewayMulticastGroupMembersResponse(const RegisterTransitGatewayMulticastGroupMembersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTransitGatewayMulticastGroupMembersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTransitGatewayMulticastGroupMembersResponse)
    Q_DISABLE_COPY(RegisterTransitGatewayMulticastGroupMembersResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
