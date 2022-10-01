// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMINGSESSIONRESPONSE_P_H
#define QTAWS_STARTSTREAMINGSESSIONRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class StartStreamingSessionResponse;

class StartStreamingSessionResponsePrivate : public NimbleResponsePrivate {

public:

    explicit StartStreamingSessionResponsePrivate(StartStreamingSessionResponse * const q);

    void parseStartStreamingSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartStreamingSessionResponse)
    Q_DISABLE_COPY(StartStreamingSessionResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
