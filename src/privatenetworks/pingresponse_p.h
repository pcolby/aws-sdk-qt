// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINGRESPONSE_P_H
#define QTAWS_PINGRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class PingResponse;

class PingResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit PingResponsePrivate(PingResponse * const q);

    void parsePingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PingResponse)
    Q_DISABLE_COPY(PingResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
