// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGCMCHANNELRESPONSE_P_H
#define QTAWS_DELETEGCMCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteGcmChannelResponse;

class DeleteGcmChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteGcmChannelResponsePrivate(DeleteGcmChannelResponse * const q);

    void parseDeleteGcmChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGcmChannelResponse)
    Q_DISABLE_COPY(DeleteGcmChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
