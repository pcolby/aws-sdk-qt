// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_P_H
#define QTAWS_GETCONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_P_H

#include "configservicerequest_p.h"
#include "getconformancepackcompliancesummaryrequest.h"

namespace QtAws {
namespace ConfigService {

class GetConformancePackComplianceSummaryRequest;

class GetConformancePackComplianceSummaryRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetConformancePackComplianceSummaryRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetConformancePackComplianceSummaryRequest * const q);
    GetConformancePackComplianceSummaryRequestPrivate(const GetConformancePackComplianceSummaryRequestPrivate &other,
                                   GetConformancePackComplianceSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConformancePackComplianceSummaryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
