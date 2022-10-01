// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDPERMISSIONSREQUEST_P_H
#define QTAWS_DESCRIBEDASHBOARDPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describedashboardpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDashboardPermissionsRequest;

class DescribeDashboardPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeDashboardPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeDashboardPermissionsRequest * const q);
    DescribeDashboardPermissionsRequestPrivate(const DescribeDashboardPermissionsRequestPrivate &other,
                                   DescribeDashboardPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDashboardPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
