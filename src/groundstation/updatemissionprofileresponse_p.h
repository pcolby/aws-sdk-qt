// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMISSIONPROFILERESPONSE_P_H
#define QTAWS_UPDATEMISSIONPROFILERESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class UpdateMissionProfileResponse;

class UpdateMissionProfileResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit UpdateMissionProfileResponsePrivate(UpdateMissionProfileResponse * const q);

    void parseUpdateMissionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMissionProfileResponse)
    Q_DISABLE_COPY(UpdateMissionProfileResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
