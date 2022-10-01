// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDASHBOARDSREQUEST_P_H
#define QTAWS_SEARCHDASHBOARDSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "searchdashboardsrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchDashboardsRequest;

class SearchDashboardsRequestPrivate : public QuickSightRequestPrivate {

public:
    SearchDashboardsRequestPrivate(const QuickSightRequest::Action action,
                                   SearchDashboardsRequest * const q);
    SearchDashboardsRequestPrivate(const SearchDashboardsRequestPrivate &other,
                                   SearchDashboardsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchDashboardsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
