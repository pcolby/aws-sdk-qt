// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPMEMBERSHIPSREQUEST_P_H
#define QTAWS_LISTGROUPMEMBERSHIPSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listgroupmembershipsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListGroupMembershipsRequest;

class ListGroupMembershipsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListGroupMembershipsRequestPrivate(const QuickSightRequest::Action action,
                                   ListGroupMembershipsRequest * const q);
    ListGroupMembershipsRequestPrivate(const ListGroupMembershipsRequestPrivate &other,
                                   ListGroupMembershipsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupMembershipsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
