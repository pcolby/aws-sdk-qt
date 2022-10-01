// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIMULATIONAPPLICATIONRESPONSE_P_H
#define QTAWS_UPDATESIMULATIONAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class UpdateSimulationApplicationResponse;

class UpdateSimulationApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit UpdateSimulationApplicationResponsePrivate(UpdateSimulationApplicationResponse * const q);

    void parseUpdateSimulationApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSimulationApplicationResponse)
    Q_DISABLE_COPY(UpdateSimulationApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
