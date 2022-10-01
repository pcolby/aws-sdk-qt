// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONJOBRESPONSE_P_H
#define QTAWS_CREATESIMULATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationJobResponse;

class CreateSimulationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateSimulationJobResponsePrivate(CreateSimulationJobResponse * const q);

    void parseCreateSimulationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSimulationJobResponse)
    Q_DISABLE_COPY(CreateSimulationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
