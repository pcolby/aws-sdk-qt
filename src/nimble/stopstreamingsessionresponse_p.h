// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMINGSESSIONRESPONSE_P_H
#define QTAWS_STOPSTREAMINGSESSIONRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class StopStreamingSessionResponse;

class StopStreamingSessionResponsePrivate : public NimbleResponsePrivate {

public:

    explicit StopStreamingSessionResponsePrivate(StopStreamingSessionResponse * const q);

    void parseStopStreamingSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopStreamingSessionResponse)
    Q_DISABLE_COPY(StopStreamingSessionResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
