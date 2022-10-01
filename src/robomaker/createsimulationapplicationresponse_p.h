// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONAPPLICATIONRESPONSE_P_H
#define QTAWS_CREATESIMULATIONAPPLICATIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationApplicationResponse;

class CreateSimulationApplicationResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateSimulationApplicationResponsePrivate(CreateSimulationApplicationResponse * const q);

    void parseCreateSimulationApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSimulationApplicationResponse)
    Q_DISABLE_COPY(CreateSimulationApplicationResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
