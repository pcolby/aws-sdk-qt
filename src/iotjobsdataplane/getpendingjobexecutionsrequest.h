// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPENDINGJOBEXECUTIONSREQUEST_H
#define QTAWS_GETPENDINGJOBEXECUTIONSREQUEST_H

#include "iotjobsdataplanerequest.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class GetPendingJobExecutionsRequestPrivate;

class QTAWSIOTJOBSDATAPLANE_EXPORT GetPendingJobExecutionsRequest : public IoTJobsDataPlaneRequest {

public:
    GetPendingJobExecutionsRequest(const GetPendingJobExecutionsRequest &other);
    GetPendingJobExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPendingJobExecutionsRequest)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
