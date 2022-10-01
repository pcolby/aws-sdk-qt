// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNGATEWAYRESPONSE_H
#define QTAWS_CREATEVPNGATEWAYRESPONSE_H

#include "ec2response.h"
#include "createvpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnGatewayResponsePrivate;

class QTAWSEC2_EXPORT CreateVpnGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpnGatewayResponse(const CreateVpnGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpnGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpnGatewayResponse)
    Q_DISABLE_COPY(CreateVpnGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
