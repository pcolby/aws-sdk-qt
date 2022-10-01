// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNEXTPENDINGJOBEXECUTIONRESPONSE_P_H
#define QTAWS_STARTNEXTPENDINGJOBEXECUTIONRESPONSE_P_H

#include "iotjobsdataplaneresponse_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class StartNextPendingJobExecutionResponse;

class StartNextPendingJobExecutionResponsePrivate : public IoTJobsDataPlaneResponsePrivate {

public:

    explicit StartNextPendingJobExecutionResponsePrivate(StartNextPendingJobExecutionResponse * const q);

    void parseStartNextPendingJobExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartNextPendingJobExecutionResponse)
    Q_DISABLE_COPY(StartNextPendingJobExecutionResponsePrivate)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
