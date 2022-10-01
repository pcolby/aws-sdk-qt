// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGSESSIONSRESPONSE_P_H
#define QTAWS_LISTSTREAMINGSESSIONSRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListStreamingSessionsResponse;

class ListStreamingSessionsResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListStreamingSessionsResponsePrivate(ListStreamingSessionsResponse * const q);

    void parseListStreamingSessionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStreamingSessionsResponse)
    Q_DISABLE_COPY(ListStreamingSessionsResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
