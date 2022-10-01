// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBBATCHRESPONSE_P_H
#define QTAWS_CANCELSIMULATIONJOBBATCHRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobBatchResponse;

class CancelSimulationJobBatchResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit CancelSimulationJobBatchResponsePrivate(CancelSimulationJobBatchResponse * const q);

    void parseCancelSimulationJobBatchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelSimulationJobBatchResponse)
    Q_DISABLE_COPY(CancelSimulationJobBatchResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
