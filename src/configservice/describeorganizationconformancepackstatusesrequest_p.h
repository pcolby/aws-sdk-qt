// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeorganizationconformancepackstatusesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePackStatusesRequest;

class DescribeOrganizationConformancePackStatusesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeOrganizationConformancePackStatusesRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeOrganizationConformancePackStatusesRequest * const q);
    DescribeOrganizationConformancePackStatusesRequestPrivate(const DescribeOrganizationConformancePackStatusesRequestPrivate &other,
                                   DescribeOrganizationConformancePackStatusesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConformancePackStatusesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
