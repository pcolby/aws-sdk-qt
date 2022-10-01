// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATETUNNELACCESSTOKENRESPONSE_P_H
#define QTAWS_ROTATETUNNELACCESSTOKENRESPONSE_P_H

#include "iotsecuretunnelingresponse_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

class RotateTunnelAccessTokenResponse;

class RotateTunnelAccessTokenResponsePrivate : public IoTSecureTunnelingResponsePrivate {

public:

    explicit RotateTunnelAccessTokenResponsePrivate(RotateTunnelAccessTokenResponse * const q);

    void parseRotateTunnelAccessTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RotateTunnelAccessTokenResponse)
    Q_DISABLE_COPY(RotateTunnelAccessTokenResponsePrivate)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
