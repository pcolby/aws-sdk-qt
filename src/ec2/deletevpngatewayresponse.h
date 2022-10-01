// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNGATEWAYRESPONSE_H
#define QTAWS_DELETEVPNGATEWAYRESPONSE_H

#include "ec2response.h"
#include "deletevpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnGatewayResponsePrivate;

class QTAWSEC2_EXPORT DeleteVpnGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteVpnGatewayResponse(const DeleteVpnGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpnGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpnGatewayResponse)
    Q_DISABLE_COPY(DeleteVpnGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
