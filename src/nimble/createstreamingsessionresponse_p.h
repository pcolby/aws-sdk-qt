// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGSESSIONRESPONSE_P_H
#define QTAWS_CREATESTREAMINGSESSIONRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingSessionResponse;

class CreateStreamingSessionResponsePrivate : public NimbleResponsePrivate {

public:

    explicit CreateStreamingSessionResponsePrivate(CreateStreamingSessionResponse * const q);

    void parseCreateStreamingSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamingSessionResponse)
    Q_DISABLE_COPY(CreateStreamingSessionResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
