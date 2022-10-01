// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSCHANNELRESPONSE_P_H
#define QTAWS_DELETESMSCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsChannelResponse;

class DeleteSmsChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteSmsChannelResponsePrivate(DeleteSmsChannelResponse * const q);

    void parseDeleteSmsChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSmsChannelResponse)
    Q_DISABLE_COPY(DeleteSmsChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
