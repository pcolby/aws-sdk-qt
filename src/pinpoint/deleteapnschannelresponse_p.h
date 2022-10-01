// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSCHANNELRESPONSE_P_H
#define QTAWS_DELETEAPNSCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsChannelResponse;

class DeleteApnsChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteApnsChannelResponsePrivate(DeleteApnsChannelResponse * const q);

    void parseDeleteApnsChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApnsChannelResponse)
    Q_DISABLE_COPY(DeleteApnsChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
