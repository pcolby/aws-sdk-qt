// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBEXECUTIONRESPONSE_H
#define QTAWS_UPDATEJOBEXECUTIONRESPONSE_H

#include "iotjobsdataplaneresponse.h"
#include "updatejobexecutionrequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class UpdateJobExecutionResponsePrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT UpdateJobExecutionResponse : public IoTJobsDataPlaneResponse {
    Q_OBJECT

public:
    UpdateJobExecutionResponse(const UpdateJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobExecutionResponse)
    Q_DISABLE_COPY(UpdateJobExecutionResponse)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
