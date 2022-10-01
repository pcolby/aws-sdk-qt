// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNEXTPENDINGJOBEXECUTIONRESPONSE_H
#define QTAWS_STARTNEXTPENDINGJOBEXECUTIONRESPONSE_H

#include "iotjobsdataplaneresponse.h"
#include "startnextpendingjobexecutionrequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class StartNextPendingJobExecutionResponsePrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT StartNextPendingJobExecutionResponse : public IoTJobsDataPlaneResponse {
    Q_OBJECT

public:
    StartNextPendingJobExecutionResponse(const StartNextPendingJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartNextPendingJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNextPendingJobExecutionResponse)
    Q_DISABLE_COPY(StartNextPendingJobExecutionResponse)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
