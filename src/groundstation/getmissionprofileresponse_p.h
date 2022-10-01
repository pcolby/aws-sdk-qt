// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMISSIONPROFILERESPONSE_P_H
#define QTAWS_GETMISSIONPROFILERESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class GetMissionProfileResponse;

class GetMissionProfileResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit GetMissionProfileResponsePrivate(GetMissionProfileResponse * const q);

    void parseGetMissionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMissionProfileResponse)
    Q_DISABLE_COPY(GetMissionProfileResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
