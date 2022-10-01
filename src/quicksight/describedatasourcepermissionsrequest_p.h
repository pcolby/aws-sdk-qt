// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEDATASOURCEPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describedatasourcepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSourcePermissionsRequest;

class DescribeDataSourcePermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeDataSourcePermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeDataSourcePermissionsRequest * const q);
    DescribeDataSourcePermissionsRequestPrivate(const DescribeDataSourcePermissionsRequestPrivate &other,
                                   DescribeDataSourcePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSourcePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
