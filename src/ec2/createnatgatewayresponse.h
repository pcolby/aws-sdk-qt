// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENATGATEWAYRESPONSE_H
#define QTAWS_CREATENATGATEWAYRESPONSE_H

#include "ec2response.h"
#include "createnatgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNatGatewayResponsePrivate;

class QTAWSEC2_EXPORT CreateNatGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateNatGatewayResponse(const CreateNatGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNatGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNatGatewayResponse)
    Q_DISABLE_COPY(CreateNatGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
