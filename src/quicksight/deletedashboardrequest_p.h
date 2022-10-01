// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDREQUEST_P_H
#define QTAWS_DELETEDASHBOARDREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletedashboardrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteDashboardRequest;

class DeleteDashboardRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteDashboardRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteDashboardRequest * const q);
    DeleteDashboardRequestPrivate(const DeleteDashboardRequestPrivate &other,
                                   DeleteDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDashboardRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
