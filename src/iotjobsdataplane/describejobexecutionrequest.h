// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBEXECUTIONREQUEST_H
#define QTAWS_DESCRIBEJOBEXECUTIONREQUEST_H

#include "iotjobsdataplanerequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class DescribeJobExecutionRequestPrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT DescribeJobExecutionRequest : public IoTJobsDataPlaneRequest {

public:
    DescribeJobExecutionRequest(const DescribeJobExecutionRequest &other);
    DescribeJobExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobExecutionRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
