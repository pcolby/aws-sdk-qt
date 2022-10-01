// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGROUPSREQUEST_P_H
#define QTAWS_SEARCHGROUPSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "searchgroupsrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchGroupsRequest;

class SearchGroupsRequestPrivate : public QuickSightRequestPrivate {

public:
    SearchGroupsRequestPrivate(const QuickSightRequest::Action action,
                                   SearchGroupsRequest * const q);
    SearchGroupsRequestPrivate(const SearchGroupsRequestPrivate &other,
                                   SearchGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchGroupsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
