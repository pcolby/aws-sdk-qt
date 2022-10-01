// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_H
#define QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESRESPONSE_H

#include "ec2response.h"
#include "registertransitgatewaymulticastgroupsourcesrequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterTransitGatewayMulticastGroupSourcesResponsePrivate;

class QTAWSEC2_EXPORT RegisterTransitGatewayMulticastGroupSourcesResponse : public Ec2Response {
    Q_OBJECT

public:
    RegisterTransitGatewayMulticastGroupSourcesResponse(const RegisterTransitGatewayMulticastGroupSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTransitGatewayMulticastGroupSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTransitGatewayMulticastGroupSourcesResponse)
    Q_DISABLE_COPY(RegisterTransitGatewayMulticastGroupSourcesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
