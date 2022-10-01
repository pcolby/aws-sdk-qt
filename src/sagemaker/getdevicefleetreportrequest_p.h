// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEFLEETREPORTREQUEST_P_H
#define QTAWS_GETDEVICEFLEETREPORTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "getdevicefleetreportrequest.h"

namespace QtAws {
namespace SageMaker {

class GetDeviceFleetReportRequest;

class GetDeviceFleetReportRequestPrivate : public SageMakerRequestPrivate {

public:
    GetDeviceFleetReportRequestPrivate(const SageMakerRequest::Action action,
                                   GetDeviceFleetReportRequest * const q);
    GetDeviceFleetReportRequestPrivate(const GetDeviceFleetReportRequestPrivate &other,
                                   GetDeviceFleetReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeviceFleetReportRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
