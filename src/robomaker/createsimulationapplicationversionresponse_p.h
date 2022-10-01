// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONAPPLICATIONVERSIONRESPONSE_P_H
#define QTAWS_CREATESIMULATIONAPPLICATIONVERSIONRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationApplicationVersionResponse;

class CreateSimulationApplicationVersionResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CreateSimulationApplicationVersionResponsePrivate(CreateSimulationApplicationVersionResponse * const q);

    void parseCreateSimulationApplicationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSimulationApplicationVersionResponse)
    Q_DISABLE_COPY(CreateSimulationApplicationVersionResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
