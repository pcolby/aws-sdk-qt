// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMISSIONPROFILERESPONSE_P_H
#define QTAWS_CREATEMISSIONPROFILERESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class CreateMissionProfileResponse;

class CreateMissionProfileResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit CreateMissionProfileResponsePrivate(CreateMissionProfileResponse * const q);

    void parseCreateMissionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMissionProfileResponse)
    Q_DISABLE_COPY(CreateMissionProfileResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
