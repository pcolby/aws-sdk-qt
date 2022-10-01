// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIMULATIONJOBBATCHRESPONSE_P_H
#define QTAWS_STARTSIMULATIONJOBBATCHRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class StartSimulationJobBatchResponse;

class StartSimulationJobBatchResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit StartSimulationJobBatchResponsePrivate(StartSimulationJobBatchResponse * const q);

    void parseStartSimulationJobBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSimulationJobBatchResponse)
    Q_DISABLE_COPY(StartSimulationJobBatchResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
