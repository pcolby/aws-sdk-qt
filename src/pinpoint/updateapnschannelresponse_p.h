// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSCHANNELRESPONSE_P_H
#define QTAWS_UPDATEAPNSCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsChannelResponse;

class UpdateApnsChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateApnsChannelResponsePrivate(UpdateApnsChannelResponse * const q);

    void parseUpdateApnsChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApnsChannelResponse)
    Q_DISABLE_COPY(UpdateApnsChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
