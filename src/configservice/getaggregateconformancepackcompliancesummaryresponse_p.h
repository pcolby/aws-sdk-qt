// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYRESPONSE_P_H
#define QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateConformancePackComplianceSummaryResponse;

class GetAggregateConformancePackComplianceSummaryResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetAggregateConformancePackComplianceSummaryResponsePrivate(GetAggregateConformancePackComplianceSummaryResponse * const q);

    void parseGetAggregateConformancePackComplianceSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAggregateConformancePackComplianceSummaryResponse)
    Q_DISABLE_COPY(GetAggregateConformancePackComplianceSummaryResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
