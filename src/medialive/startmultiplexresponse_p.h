// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTIPLEXRESPONSE_P_H
#define QTAWS_STARTMULTIPLEXRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class StartMultiplexResponse;

class StartMultiplexResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit StartMultiplexResponsePrivate(StartMultiplexResponse * const q);

    void parseStartMultiplexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMultiplexResponse)
    Q_DISABLE_COPY(StartMultiplexResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
