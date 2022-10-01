// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETUNNELRESPONSE_P_H
#define QTAWS_DESCRIBETUNNELRESPONSE_P_H

#include "iotsecuretunnelingresponse_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

class DescribeTunnelResponse;

class DescribeTunnelResponsePrivate : public IoTSecureTunnelingResponsePrivate {

public:

    explicit DescribeTunnelResponsePrivate(DescribeTunnelResponse * const q);

    void parseDescribeTunnelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTunnelResponse)
    Q_DISABLE_COPY(DescribeTunnelResponsePrivate)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
