// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBEXECUTIONRESPONSE_P_H
#define QTAWS_UPDATEJOBEXECUTIONRESPONSE_P_H

#include "iotjobsdataplaneresponse_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class UpdateJobExecutionResponse;

class UpdateJobExecutionResponsePrivate : public IoTJobsDataPlaneResponsePrivate {

public:

    explicit UpdateJobExecutionResponsePrivate(UpdateJobExecutionResponse * const q);

    void parseUpdateJobExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobExecutionResponse)
    Q_DISABLE_COPY(UpdateJobExecutionResponsePrivate)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
