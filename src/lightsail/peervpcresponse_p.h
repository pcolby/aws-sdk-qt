// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PEERVPCRESPONSE_P_H
#define QTAWS_PEERVPCRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class PeerVpcResponse;

class PeerVpcResponsePrivate : public LightsailResponsePrivate {

public:

    explicit PeerVpcResponsePrivate(PeerVpcResponse * const q);

    void parsePeerVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PeerVpcResponse)
    Q_DISABLE_COPY(PeerVpcResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
