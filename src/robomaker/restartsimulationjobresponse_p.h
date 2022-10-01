// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTSIMULATIONJOBRESPONSE_P_H
#define QTAWS_RESTARTSIMULATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class RestartSimulationJobResponse;

class RestartSimulationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit RestartSimulationJobResponsePrivate(RestartSimulationJobResponse * const q);

    void parseRestartSimulationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestartSimulationJobResponse)
    Q_DISABLE_COPY(RestartSimulationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
