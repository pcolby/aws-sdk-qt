// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPERMISSIONSREQUEST_P_H
#define QTAWS_UPDATEDASHBOARDPERMISSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatedashboardpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPermissionsRequest;

class UpdateDashboardPermissionsRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateDashboardPermissionsRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateDashboardPermissionsRequest * const q);
    UpdateDashboardPermissionsRequestPrivate(const UpdateDashboardPermissionsRequestPrivate &other,
                                   UpdateDashboardPermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDashboardPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
