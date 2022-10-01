// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETREQUEST_P_H
#define QTAWS_DESCRIBEDATASETREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describedatasetrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetRequest;

class DescribeDataSetRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeDataSetRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeDataSetRequest * const q);
    DescribeDataSetRequestPrivate(const DescribeDataSetRequestPrivate &other,
                                   DescribeDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSetRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
