// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTHEALTHREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTHEALTHREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeaccounthealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountHealthRequest;

class DescribeAccountHealthRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeAccountHealthRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeAccountHealthRequest * const q);
    DescribeAccountHealthRequestPrivate(const DescribeAccountHealthRequestPrivate &other,
                                   DescribeAccountHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountHealthRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
