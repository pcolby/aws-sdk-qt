// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_P_H
#define QTAWS_GETAGGREGATECONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_P_H

#include "configservicerequest_p.h"
#include "getaggregateconformancepackcompliancesummaryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateConformancePackComplianceSummaryRequest;

class GetAggregateConformancePackComplianceSummaryRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetAggregateConformancePackComplianceSummaryRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetAggregateConformancePackComplianceSummaryRequest * const q);
    GetAggregateConformancePackComplianceSummaryRequestPrivate(const GetAggregateConformancePackComplianceSummaryRequestPrivate &other,
                                   GetAggregateConformancePackComplianceSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAggregateConformancePackComplianceSummaryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
