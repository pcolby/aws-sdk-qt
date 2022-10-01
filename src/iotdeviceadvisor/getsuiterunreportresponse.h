// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNREPORTRESPONSE_H
#define QTAWS_GETSUITERUNREPORTRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "getsuiterunreportrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunReportResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT GetSuiteRunReportResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    GetSuiteRunReportResponse(const GetSuiteRunReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSuiteRunReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteRunReportResponse)
    Q_DISABLE_COPY(GetSuiteRunReportResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
