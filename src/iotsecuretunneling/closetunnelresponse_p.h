// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSETUNNELRESPONSE_P_H
#define QTAWS_CLOSETUNNELRESPONSE_P_H

#include "iotsecuretunnelingresponse_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

class CloseTunnelResponse;

class CloseTunnelResponsePrivate : public IoTSecureTunnelingResponsePrivate {

public:

    explicit CloseTunnelResponsePrivate(CloseTunnelResponse * const q);

    void parseCloseTunnelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloseTunnelResponse)
    Q_DISABLE_COPY(CloseTunnelResponsePrivate)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
