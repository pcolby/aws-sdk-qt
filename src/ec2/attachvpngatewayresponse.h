// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVPNGATEWAYRESPONSE_H
#define QTAWS_ATTACHVPNGATEWAYRESPONSE_H

#include "ec2response.h"
#include "attachvpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class AttachVpnGatewayResponsePrivate;

class QTAWSEC2_EXPORT AttachVpnGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    AttachVpnGatewayResponse(const AttachVpnGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachVpnGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachVpnGatewayResponse)
    Q_DISABLE_COPY(AttachVpnGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
