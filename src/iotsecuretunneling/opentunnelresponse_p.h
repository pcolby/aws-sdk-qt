// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENTUNNELRESPONSE_P_H
#define QTAWS_OPENTUNNELRESPONSE_P_H

#include "iotsecuretunnelingresponse_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

class OpenTunnelResponse;

class OpenTunnelResponsePrivate : public IoTSecureTunnelingResponsePrivate {

public:

    explicit OpenTunnelResponsePrivate(OpenTunnelResponse * const q);

    void parseOpenTunnelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OpenTunnelResponse)
    Q_DISABLE_COPY(OpenTunnelResponsePrivate)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
