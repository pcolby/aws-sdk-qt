// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCEREQUEST_P_H
#define QTAWS_DESCRIBEDATASOURCEREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describedatasourcerequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSourceRequest;

class DescribeDataSourceRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeDataSourceRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeDataSourceRequest * const q);
    DescribeDataSourceRequestPrivate(const DescribeDataSourceRequestPrivate &other,
                                   DescribeDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSourceRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
