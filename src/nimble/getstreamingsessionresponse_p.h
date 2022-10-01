// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGSESSIONRESPONSE_P_H
#define QTAWS_GETSTREAMINGSESSIONRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class GetStreamingSessionResponse;

class GetStreamingSessionResponsePrivate : public NimbleResponsePrivate {

public:

    explicit GetStreamingSessionResponsePrivate(GetStreamingSessionResponse * const q);

    void parseGetStreamingSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStreamingSessionResponse)
    Q_DISABLE_COPY(GetStreamingSessionResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
