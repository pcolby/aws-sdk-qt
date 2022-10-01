// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_H
#define QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_H

#include "ec2response.h"
#include "associatetransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayPolicyTableResponsePrivate;

class QTAWSEC2_EXPORT AssociateTransitGatewayPolicyTableResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateTransitGatewayPolicyTableResponse(const AssociateTransitGatewayPolicyTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTransitGatewayPolicyTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayPolicyTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
