// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESREQUEST_P_H
#define QTAWS_DESCRIBESERVICESREQUEST_P_H

#include "pricingrequest_p.h"
#include "describeservicesrequest.h"

namespace QtAws {
namespace Pricing {

class DescribeServicesRequest;

class DescribeServicesRequestPrivate : public PricingRequestPrivate {

public:
    DescribeServicesRequestPrivate(const PricingRequest::Action action,
                                   DescribeServicesRequest * const q);
    DescribeServicesRequestPrivate(const DescribeServicesRequestPrivate &other,
                                   DescribeServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServicesRequest)

};

} // namespace Pricing
} // namespace QtAws

#endif
