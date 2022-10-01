// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONREQUEST_P_H
#define QTAWS_UPDATEDASHBOARDPUBLISHEDVERSIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatedashboardpublishedversionrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDashboardPublishedVersionRequest;

class UpdateDashboardPublishedVersionRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateDashboardPublishedVersionRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateDashboardPublishedVersionRequest * const q);
    UpdateDashboardPublishedVersionRequestPrivate(const UpdateDashboardPublishedVersionRequestPrivate &other,
                                   UpdateDashboardPublishedVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDashboardPublishedVersionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
