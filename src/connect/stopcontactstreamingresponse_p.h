// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTACTSTREAMINGRESPONSE_P_H
#define QTAWS_STOPCONTACTSTREAMINGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StopContactStreamingResponse;

class StopContactStreamingResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StopContactStreamingResponsePrivate(StopContactStreamingResponse * const q);

    void parseStopContactStreamingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopContactStreamingResponse)
    Q_DISABLE_COPY(StopContactStreamingResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
