// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_H

#include "ec2response.h"
#include "disassociatetransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayPolicyTableResponsePrivate;

class QTAWSEC2_EXPORT DisassociateTransitGatewayPolicyTableResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateTransitGatewayPolicyTableResponse(const DisassociateTransitGatewayPolicyTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTransitGatewayPolicyTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayPolicyTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
