// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBEAVAILABILITYOPTIONSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describeavailabilityoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeAvailabilityOptionsRequest;

class DescribeAvailabilityOptionsRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeAvailabilityOptionsRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeAvailabilityOptionsRequest * const q);
    DescribeAvailabilityOptionsRequestPrivate(const DescribeAvailabilityOptionsRequestPrivate &other,
                                   DescribeAvailabilityOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAvailabilityOptionsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
