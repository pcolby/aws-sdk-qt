// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNEXTPENDINGJOBEXECUTIONREQUEST_P_H
#define QTAWS_STARTNEXTPENDINGJOBEXECUTIONREQUEST_P_H

#include "iotjobsdataplanerequest_p.h"
#include "startnextpendingjobexecutionrequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class StartNextPendingJobExecutionRequest;

class StartNextPendingJobExecutionRequestPrivate : public IoTJobsDataPlaneRequestPrivate {

public:
    StartNextPendingJobExecutionRequestPrivate(const IoTJobsDataPlaneRequest::Action action,
                                   StartNextPendingJobExecutionRequest * const q);
    StartNextPendingJobExecutionRequestPrivate(const StartNextPendingJobExecutionRequestPrivate &other,
                                   StartNextPendingJobExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartNextPendingJobExecutionRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
