// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESREQUEST_P_H
#define QTAWS_DESCRIBESERVICESREQUEST_P_H

#include "supportrequest_p.h"
#include "describeservicesrequest.h"

namespace QtAws {
namespace Support {

class DescribeServicesRequest;

class DescribeServicesRequestPrivate : public SupportRequestPrivate {

public:
    DescribeServicesRequestPrivate(const SupportRequest::Action action,
                                   DescribeServicesRequest * const q);
    DescribeServicesRequestPrivate(const DescribeServicesRequestPrivate &other,
                                   DescribeServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServicesRequest)

};

} // namespace Support
} // namespace QtAws

#endif
