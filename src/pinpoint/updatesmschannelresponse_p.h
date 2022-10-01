// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSCHANNELRESPONSE_P_H
#define QTAWS_UPDATESMSCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsChannelResponse;

class UpdateSmsChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateSmsChannelResponsePrivate(UpdateSmsChannelResponse * const q);

    void parseUpdateSmsChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSmsChannelResponse)
    Q_DISABLE_COPY(UpdateSmsChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
