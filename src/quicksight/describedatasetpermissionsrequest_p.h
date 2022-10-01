// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEDATASETPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describedatasetpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetPermissionsRequest;

class DescribeDataSetPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeDataSetPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeDataSetPermissionsRequest * const q);
    DescribeDataSetPermissionsRequestPrivate(const DescribeDataSetPermissionsRequestPrivate &other,
                                   DescribeDataSetPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataSetPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
