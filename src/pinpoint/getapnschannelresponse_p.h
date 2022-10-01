// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSCHANNELRESPONSE_P_H
#define QTAWS_GETAPNSCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsChannelResponse;

class GetApnsChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetApnsChannelResponsePrivate(GetApnsChannelResponse * const q);

    void parseGetApnsChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApnsChannelResponse)
    Q_DISABLE_COPY(GetApnsChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
