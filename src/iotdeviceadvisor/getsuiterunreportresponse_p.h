// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNREPORTRESPONSE_P_H
#define QTAWS_GETSUITERUNREPORTRESPONSE_P_H

#include "iotdeviceadvisorresponse_p.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunReportResponse;

class GetSuiteRunReportResponsePrivate : public IotDeviceAdvisorResponsePrivate {

public:

    explicit GetSuiteRunReportResponsePrivate(GetSuiteRunReportResponse * const q);

    void parseGetSuiteRunReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSuiteRunReportResponse)
    Q_DISABLE_COPY(GetSuiteRunReportResponsePrivate)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
