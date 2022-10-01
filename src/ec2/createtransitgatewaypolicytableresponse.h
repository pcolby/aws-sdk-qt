// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPOLICYTABLERESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYPOLICYTABLERESPONSE_H

#include "ec2response.h"
#include "createtransitgatewaypolicytablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPolicyTableResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayPolicyTableResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayPolicyTableResponse(const CreateTransitGatewayPolicyTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayPolicyTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPolicyTableResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
