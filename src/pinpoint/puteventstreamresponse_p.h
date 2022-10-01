// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSTREAMRESPONSE_P_H
#define QTAWS_PUTEVENTSTREAMRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class PutEventStreamResponse;

class PutEventStreamResponsePrivate : public PinpointResponsePrivate {

public:

    explicit PutEventStreamResponsePrivate(PutEventStreamResponse * const q);

    void parsePutEventStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEventStreamResponse)
    Q_DISABLE_COPY(PutEventStreamResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
