// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBRESPONSE_P_H
#define QTAWS_CANCELSIMULATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobResponse;

class CancelSimulationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CancelSimulationJobResponsePrivate(CancelSimulationJobResponse * const q);

    void parseCancelSimulationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelSimulationJobResponse)
    Q_DISABLE_COPY(CancelSimulationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
