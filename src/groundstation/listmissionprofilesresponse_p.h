// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMISSIONPROFILESRESPONSE_P_H
#define QTAWS_LISTMISSIONPROFILESRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class ListMissionProfilesResponse;

class ListMissionProfilesResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit ListMissionProfilesResponsePrivate(ListMissionProfilesResponse * const q);

    void parseListMissionProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMissionProfilesResponse)
    Q_DISABLE_COPY(ListMissionProfilesResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
