// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSREQUEST_P_H
#define QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSREQUEST_P_H

#include "configservicerequest_p.h"
#include "getconformancepackcompliancedetailsrequest.h"

namespace QtAws {
namespace ConfigService {

class GetConformancePackComplianceDetailsRequest;

class GetConformancePackComplianceDetailsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetConformancePackComplianceDetailsRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetConformancePackComplianceDetailsRequest * const q);
    GetConformancePackComplianceDetailsRequestPrivate(const GetConformancePackComplianceDetailsRequestPrivate &other,
                                   GetConformancePackComplianceDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConformancePackComplianceDetailsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
