// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTROOMMESSAGERESPONSE_P_H
#define QTAWS_REDACTROOMMESSAGERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class RedactRoomMessageResponse;

class RedactRoomMessageResponsePrivate : public ChimeResponsePrivate {

public:

    explicit RedactRoomMessageResponsePrivate(RedactRoomMessageResponse * const q);

    void parseRedactRoomMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RedactRoomMessageResponse)
    Q_DISABLE_COPY(RedactRoomMessageResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
