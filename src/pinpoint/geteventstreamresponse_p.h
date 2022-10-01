// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSTREAMRESPONSE_P_H
#define QTAWS_GETEVENTSTREAMRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetEventStreamResponse;

class GetEventStreamResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetEventStreamResponsePrivate(GetEventStreamResponse * const q);

    void parseGetEventStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventStreamResponse)
    Q_DISABLE_COPY(GetEventStreamResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
