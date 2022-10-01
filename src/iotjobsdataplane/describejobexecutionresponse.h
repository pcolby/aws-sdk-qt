// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBEXECUTIONRESPONSE_H
#define QTAWS_DESCRIBEJOBEXECUTIONRESPONSE_H

#include "iotjobsdataplaneresponse.h"
#include "describejobexecutionrequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class DescribeJobExecutionResponsePrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT DescribeJobExecutionResponse : public IoTJobsDataPlaneResponse {
    Q_OBJECT

public:
    DescribeJobExecutionResponse(const DescribeJobExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeJobExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobExecutionResponse)
    Q_DISABLE_COPY(DescribeJobExecutionResponse)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
