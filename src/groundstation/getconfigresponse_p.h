// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGRESPONSE_P_H
#define QTAWS_GETCONFIGRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class GetConfigResponse;

class GetConfigResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit GetConfigResponsePrivate(GetConfigResponse * const q);

    void parseGetConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigResponse)
    Q_DISABLE_COPY(GetConfigResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
