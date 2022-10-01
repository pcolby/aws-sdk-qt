// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATETUNNELACCESSTOKENRESPONSE_H
#define QTAWS_ROTATETUNNELACCESSTOKENRESPONSE_H

#include "iotsecuretunnelingresponse.h"
#include "rotatetunnelaccesstokenrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class RotateTunnelAccessTokenResponsePrivate;

class QTAWSIOTSECURETUNNELING_EXPORT RotateTunnelAccessTokenResponse : public IoTSecureTunnelingResponse {
    Q_OBJECT

public:
    RotateTunnelAccessTokenResponse(const RotateTunnelAccessTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RotateTunnelAccessTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateTunnelAccessTokenResponse)
    Q_DISABLE_COPY(RotateTunnelAccessTokenResponse)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
