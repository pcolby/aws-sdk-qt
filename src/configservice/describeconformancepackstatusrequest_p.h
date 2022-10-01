// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSTATUSREQUEST_P_H
#define QTAWS_DESCRIBECONFORMANCEPACKSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconformancepackstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackStatusRequest;

class DescribeConformancePackStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConformancePackStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConformancePackStatusRequest * const q);
    DescribeConformancePackStatusRequestPrivate(const DescribeConformancePackStatusRequestPrivate &other,
                                   DescribeConformancePackStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConformancePackStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
