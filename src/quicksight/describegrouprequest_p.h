// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPREQUEST_P_H
#define QTAWS_DESCRIBEGROUPREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describegrouprequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeGroupRequest;

class DescribeGroupRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeGroupRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeGroupRequest * const q);
    DescribeGroupRequestPrivate(const DescribeGroupRequestPrivate &other,
                                   DescribeGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGroupRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
