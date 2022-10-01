// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSCHANNELRESPONSE_P_H
#define QTAWS_GETSMSCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsChannelResponse;

class GetSmsChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetSmsChannelResponsePrivate(GetSmsChannelResponse * const q);

    void parseGetSmsChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSmsChannelResponse)
    Q_DISABLE_COPY(GetSmsChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
