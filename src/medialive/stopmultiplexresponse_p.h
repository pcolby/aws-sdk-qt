// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMULTIPLEXRESPONSE_P_H
#define QTAWS_STOPMULTIPLEXRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class StopMultiplexResponse;

class StopMultiplexResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit StopMultiplexResponsePrivate(StopMultiplexResponse * const q);

    void parseStopMultiplexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopMultiplexResponse)
    Q_DISABLE_COPY(StopMultiplexResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
