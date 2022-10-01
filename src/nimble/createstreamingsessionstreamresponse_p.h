// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGSESSIONSTREAMRESPONSE_P_H
#define QTAWS_CREATESTREAMINGSESSIONSTREAMRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingSessionStreamResponse;

class CreateStreamingSessionStreamResponsePrivate : public NimbleResponsePrivate {

public:

    explicit CreateStreamingSessionStreamResponsePrivate(CreateStreamingSessionStreamResponse * const q);

    void parseCreateStreamingSessionStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamingSessionStreamResponse)
    Q_DISABLE_COPY(CreateStreamingSessionStreamResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
