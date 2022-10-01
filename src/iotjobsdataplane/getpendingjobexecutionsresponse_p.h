// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPENDINGJOBEXECUTIONSRESPONSE_P_H
#define QTAWS_GETPENDINGJOBEXECUTIONSRESPONSE_P_H

#include "iotjobsdataplaneresponse_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class GetPendingJobExecutionsResponse;

class GetPendingJobExecutionsResponsePrivate : public IoTJobsDataPlaneResponsePrivate {

public:

    explicit GetPendingJobExecutionsResponsePrivate(GetPendingJobExecutionsResponse * const q);

    void parseGetPendingJobExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPendingJobExecutionsResponse)
    Q_DISABLE_COPY(GetPendingJobExecutionsResponsePrivate)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
