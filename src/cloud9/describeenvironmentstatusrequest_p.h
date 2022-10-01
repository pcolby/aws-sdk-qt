// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTSTATUSREQUEST_P_H

#include "cloud9request_p.h"
#include "describeenvironmentstatusrequest.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentStatusRequest;

class DescribeEnvironmentStatusRequestPrivate : public Cloud9RequestPrivate {

public:
    DescribeEnvironmentStatusRequestPrivate(const Cloud9Request::Action action,
                                   DescribeEnvironmentStatusRequest * const q);
    DescribeEnvironmentStatusRequestPrivate(const DescribeEnvironmentStatusRequestPrivate &other,
                                   DescribeEnvironmentStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentStatusRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
