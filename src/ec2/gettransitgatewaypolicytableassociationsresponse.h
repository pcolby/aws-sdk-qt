// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSRESPONSE_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSRESPONSE_H

#include "ec2response.h"
#include "gettransitgatewaypolicytableassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableAssociationsResponsePrivate;

class QTAWSEC2_EXPORT GetTransitGatewayPolicyTableAssociationsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetTransitGatewayPolicyTableAssociationsResponse(const GetTransitGatewayPolicyTableAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTransitGatewayPolicyTableAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPolicyTableAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayPolicyTableAssociationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
