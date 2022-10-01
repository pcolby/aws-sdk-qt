// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSREQUEST_P_H

#include "cloud9request_p.h"
#include "describeenvironmentmembershipsrequest.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentMembershipsRequest;

class DescribeEnvironmentMembershipsRequestPrivate : public Cloud9RequestPrivate {

public:
    DescribeEnvironmentMembershipsRequestPrivate(const Cloud9Request::Action action,
                                   DescribeEnvironmentMembershipsRequest * const q);
    DescribeEnvironmentMembershipsRequestPrivate(const DescribeEnvironmentMembershipsRequestPrivate &other,
                                   DescribeEnvironmentMembershipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentMembershipsRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
