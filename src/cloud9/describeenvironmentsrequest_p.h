// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSREQUEST_P_H
#define QTAWS_DESCRIBEENVIRONMENTSREQUEST_P_H

#include "cloud9request_p.h"
#include "describeenvironmentsrequest.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentsRequest;

class DescribeEnvironmentsRequestPrivate : public Cloud9RequestPrivate {

public:
    DescribeEnvironmentsRequestPrivate(const Cloud9Request::Action action,
                                   DescribeEnvironmentsRequest * const q);
    DescribeEnvironmentsRequestPrivate(const DescribeEnvironmentsRequestPrivate &other,
                                   DescribeEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEnvironmentsRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
