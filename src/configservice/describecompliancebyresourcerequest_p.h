// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYRESOURCEREQUEST_P_H
#define QTAWS_DESCRIBECOMPLIANCEBYRESOURCEREQUEST_P_H

#include "configservicerequest_p.h"
#include "describecompliancebyresourcerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByResourceRequest;

class DescribeComplianceByResourceRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeComplianceByResourceRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeComplianceByResourceRequest * const q);
    DescribeComplianceByResourceRequestPrivate(const DescribeComplianceByResourceRequestPrivate &other,
                                   DescribeComplianceByResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeComplianceByResourceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
