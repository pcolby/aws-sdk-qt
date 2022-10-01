// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCEREQUEST_P_H
#define QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCEREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconformancepackcompliancerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackComplianceRequest;

class DescribeConformancePackComplianceRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConformancePackComplianceRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConformancePackComplianceRequest * const q);
    DescribeConformancePackComplianceRequestPrivate(const DescribeConformancePackComplianceRequestPrivate &other,
                                   DescribeConformancePackComplianceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConformancePackComplianceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
