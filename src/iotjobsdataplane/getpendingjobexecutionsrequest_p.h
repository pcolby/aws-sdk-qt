// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPENDINGJOBEXECUTIONSREQUEST_P_H
#define QTAWS_GETPENDINGJOBEXECUTIONSREQUEST_P_H

#include "iotjobsdataplanerequest_p.h"
#include "getpendingjobexecutionsrequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class GetPendingJobExecutionsRequest;

class GetPendingJobExecutionsRequestPrivate : public IoTJobsDataPlaneRequestPrivate {

public:
    GetPendingJobExecutionsRequestPrivate(const IoTJobsDataPlaneRequest::Action action,
                                   GetPendingJobExecutionsRequest * const q);
    GetPendingJobExecutionsRequestPrivate(const GetPendingJobExecutionsRequestPrivate &other,
                                   GetPendingJobExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPendingJobExecutionsRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
