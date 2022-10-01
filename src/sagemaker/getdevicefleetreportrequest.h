// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEFLEETREPORTREQUEST_H
#define QTAWS_GETDEVICEFLEETREPORTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class GetDeviceFleetReportRequestPrivate;

class QTAWSSAGEMAKER_EXPORT GetDeviceFleetReportRequest : public SageMakerRequest {

public:
    GetDeviceFleetReportRequest(const GetDeviceFleetReportRequest &other);
    GetDeviceFleetReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceFleetReportRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
