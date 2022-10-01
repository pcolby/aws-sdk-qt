// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETPORTSETTINGSRESPONSE_P_H
#define QTAWS_UPDATEFLEETPORTSETTINGSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetPortSettingsResponse;

class UpdateFleetPortSettingsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateFleetPortSettingsResponsePrivate(UpdateFleetPortSettingsResponse * const q);

    void parseUpdateFleetPortSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFleetPortSettingsResponse)
    Q_DISABLE_COPY(UpdateFleetPortSettingsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
