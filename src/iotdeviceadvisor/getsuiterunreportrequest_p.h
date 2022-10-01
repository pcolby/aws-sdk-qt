// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNREPORTREQUEST_P_H
#define QTAWS_GETSUITERUNREPORTREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "getsuiterunreportrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunReportRequest;

class GetSuiteRunReportRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    GetSuiteRunReportRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   GetSuiteRunReportRequest * const q);
    GetSuiteRunReportRequestPrivate(const GetSuiteRunReportRequestPrivate &other,
                                   GetSuiteRunReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSuiteRunReportRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
