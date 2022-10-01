// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDVERSIONSREQUEST_P_H
#define QTAWS_LISTDASHBOARDVERSIONSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listdashboardversionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListDashboardVersionsRequest;

class ListDashboardVersionsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListDashboardVersionsRequestPrivate(const QuickSightRequest::Action action,
                                   ListDashboardVersionsRequest * const q);
    ListDashboardVersionsRequestPrivate(const ListDashboardVersionsRequestPrivate &other,
                                   ListDashboardVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDashboardVersionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
