// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNEXTPENDINGJOBEXECUTIONREQUEST_H
#define QTAWS_STARTNEXTPENDINGJOBEXECUTIONREQUEST_H

#include "iotjobsdataplanerequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class StartNextPendingJobExecutionRequestPrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT StartNextPendingJobExecutionRequest : public IoTJobsDataPlaneRequest {

public:
    StartNextPendingJobExecutionRequest(const StartNextPendingJobExecutionRequest &other);
    StartNextPendingJobExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNextPendingJobExecutionRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
