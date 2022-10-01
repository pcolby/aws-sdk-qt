// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGSESSIONSTREAMRESPONSE_P_H
#define QTAWS_GETSTREAMINGSESSIONSTREAMRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetStreamingSessionStreamResponse;

class GetStreamingSessionStreamResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetStreamingSessionStreamResponsePrivate(GetStreamingSessionStreamResponse * const q);

    void parseGetStreamingSessionStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamingSessionStreamResponse)
    Q_DISABLE_COPY(GetStreamingSessionStreamResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
