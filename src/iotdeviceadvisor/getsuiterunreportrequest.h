// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNREPORTREQUEST_H
#define QTAWS_GETSUITERUNREPORTREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunReportRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT GetSuiteRunReportRequest : public IotDeviceAdvisorRequest {

public:
    GetSuiteRunReportRequest(const GetSuiteRunReportRequest &other);
    GetSuiteRunReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteRunReportRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
