// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSTREAMRESPONSE_P_H
#define QTAWS_DELETEEVENTSTREAMRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEventStreamResponse;

class DeleteEventStreamResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteEventStreamResponsePrivate(DeleteEventStreamResponse * const q);

    void parseDeleteEventStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventStreamResponse)
    Q_DISABLE_COPY(DeleteEventStreamResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
