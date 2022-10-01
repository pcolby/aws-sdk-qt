// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBESIMULATIONJOBRESPONSE_P_H
#define QTAWS_BATCHDESCRIBESIMULATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class BatchDescribeSimulationJobResponse;

class BatchDescribeSimulationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit BatchDescribeSimulationJobResponsePrivate(BatchDescribeSimulationJobResponse * const q);

    void parseBatchDescribeSimulationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDescribeSimulationJobResponse)
    Q_DISABLE_COPY(BatchDescribeSimulationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
