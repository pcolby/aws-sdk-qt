// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSREQUEST_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeorganizationconformancepacksrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePacksRequest;

class DescribeOrganizationConformancePacksRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeOrganizationConformancePacksRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeOrganizationConformancePacksRequest * const q);
    DescribeOrganizationConformancePacksRequestPrivate(const DescribeOrganizationConformancePacksRequestPrivate &other,
                                   DescribeOrganizationConformancePacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConformancePacksRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
