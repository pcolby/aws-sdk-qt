// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSREQUEST_P_H
#define QTAWS_DESCRIBECONFORMANCEPACKSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconformancepacksrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePacksRequest;

class DescribeConformancePacksRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConformancePacksRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConformancePacksRequest * const q);
    DescribeConformancePacksRequestPrivate(const DescribeConformancePacksRequestPrivate &other,
                                   DescribeConformancePacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConformancePacksRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
