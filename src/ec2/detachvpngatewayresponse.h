// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVPNGATEWAYRESPONSE_H
#define QTAWS_DETACHVPNGATEWAYRESPONSE_H

#include "ec2response.h"
#include "detachvpngatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DetachVpnGatewayResponsePrivate;

class QTAWSEC2_EXPORT DetachVpnGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DetachVpnGatewayResponse(const DetachVpnGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachVpnGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachVpnGatewayResponse)
    Q_DISABLE_COPY(DetachVpnGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
