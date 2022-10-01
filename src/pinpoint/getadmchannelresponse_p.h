// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMCHANNELRESPONSE_P_H
#define QTAWS_GETADMCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetAdmChannelResponse;

class GetAdmChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetAdmChannelResponsePrivate(GetAdmChannelResponse * const q);

    void parseGetAdmChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAdmChannelResponse)
    Q_DISABLE_COPY(GetAdmChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
