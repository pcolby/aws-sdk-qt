// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBEXECUTIONREQUEST_H
#define QTAWS_UPDATEJOBEXECUTIONREQUEST_H

#include "iotjobsdataplanerequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class UpdateJobExecutionRequestPrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT UpdateJobExecutionRequest : public IoTJobsDataPlaneRequest {

public:
    UpdateJobExecutionRequest(const UpdateJobExecutionRequest &other);
    UpdateJobExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobExecutionRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
