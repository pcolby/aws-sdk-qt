// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBETHEMEPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describethemepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemePermissionsRequest;

class DescribeThemePermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeThemePermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeThemePermissionsRequest * const q);
    DescribeThemePermissionsRequestPrivate(const DescribeThemePermissionsRequestPrivate &other,
                                   DescribeThemePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeThemePermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
