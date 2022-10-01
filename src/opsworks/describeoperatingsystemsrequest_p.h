// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPERATINGSYSTEMSREQUEST_P_H
#define QTAWS_DESCRIBEOPERATINGSYSTEMSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeoperatingsystemsrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeOperatingSystemsRequest;

class DescribeOperatingSystemsRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeOperatingSystemsRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeOperatingSystemsRequest * const q);
    DescribeOperatingSystemsRequestPrivate(const DescribeOperatingSystemsRequestPrivate &other,
                                   DescribeOperatingSystemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOperatingSystemsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
