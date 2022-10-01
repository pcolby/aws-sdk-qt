// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSATELLITERESPONSE_P_H
#define QTAWS_GETSATELLITERESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class GetSatelliteResponse;

class GetSatelliteResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit GetSatelliteResponsePrivate(GetSatelliteResponse * const q);

    void parseGetSatelliteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSatelliteResponse)
    Q_DISABLE_COPY(GetSatelliteResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
