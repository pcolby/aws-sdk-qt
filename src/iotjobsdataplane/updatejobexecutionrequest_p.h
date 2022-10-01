// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBEXECUTIONREQUEST_P_H
#define QTAWS_UPDATEJOBEXECUTIONREQUEST_P_H

#include "iotjobsdataplanerequest_p.h"
#include "updatejobexecutionrequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class UpdateJobExecutionRequest;

class UpdateJobExecutionRequestPrivate : public IoTJobsDataPlaneRequestPrivate {

public:
    UpdateJobExecutionRequestPrivate(const IoTJobsDataPlaneRequest::Action action,
                                   UpdateJobExecutionRequest * const q);
    UpdateJobExecutionRequestPrivate(const UpdateJobExecutionRequestPrivate &other,
                                   UpdateJobExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJobExecutionRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
