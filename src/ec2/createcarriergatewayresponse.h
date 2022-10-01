// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECARRIERGATEWAYRESPONSE_H
#define QTAWS_CREATECARRIERGATEWAYRESPONSE_H

#include "ec2response.h"
#include "createcarriergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateCarrierGatewayResponsePrivate;

class QTAWSEC2_EXPORT CreateCarrierGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateCarrierGatewayResponse(const CreateCarrierGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCarrierGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCarrierGatewayResponse)
    Q_DISABLE_COPY(CreateCarrierGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
