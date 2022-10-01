// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCHANNELMESSAGERESPONSE_P_H
#define QTAWS_SENDCHANNELMESSAGERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class SendChannelMessageResponse;

class SendChannelMessageResponsePrivate : public ChimeResponsePrivate {

public:

    explicit SendChannelMessageResponsePrivate(SendChannelMessageResponse * const q);

    void parseSendChannelMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendChannelMessageResponse)
    Q_DISABLE_COPY(SendChannelMessageResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
