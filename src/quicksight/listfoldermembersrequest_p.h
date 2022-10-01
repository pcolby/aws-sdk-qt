// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERMEMBERSREQUEST_P_H
#define QTAWS_LISTFOLDERMEMBERSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listfoldermembersrequest.h"

namespace QtAws {
namespace QuickSight {

class ListFolderMembersRequest;

class ListFolderMembersRequestPrivate : public QuickSightRequestPrivate {

public:
    ListFolderMembersRequestPrivate(const QuickSightRequest::Action action,
                                   ListFolderMembersRequest * const q);
    ListFolderMembersRequestPrivate(const ListFolderMembersRequestPrivate &other,
                                   ListFolderMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFolderMembersRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
