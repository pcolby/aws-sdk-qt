// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFORMANCEPACKCOMPLIANCESUMMARYRESPONSE_P_H
#define QTAWS_GETCONFORMANCEPACKCOMPLIANCESUMMARYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetConformancePackComplianceSummaryResponse;

class GetConformancePackComplianceSummaryResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetConformancePackComplianceSummaryResponsePrivate(GetConformancePackComplianceSummaryResponse * const q);

    void parseGetConformancePackComplianceSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConformancePackComplianceSummaryResponse)
    Q_DISABLE_COPY(GetConformancePackComplianceSummaryResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
