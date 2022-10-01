// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSATELLITESRESPONSE_P_H
#define QTAWS_LISTSATELLITESRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class ListSatellitesResponse;

class ListSatellitesResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit ListSatellitesResponsePrivate(ListSatellitesResponse * const q);

    void parseListSatellitesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSatellitesResponse)
    Q_DISABLE_COPY(ListSatellitesResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
