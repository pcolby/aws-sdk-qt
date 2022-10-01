// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECHANNELRESPONSE_P_H
#define QTAWS_DELETEVOICECHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteVoiceChannelResponse;

class DeleteVoiceChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteVoiceChannelResponsePrivate(DeleteVoiceChannelResponse * const q);

    void parseDeleteVoiceChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceChannelResponse)
    Q_DISABLE_COPY(DeleteVoiceChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
