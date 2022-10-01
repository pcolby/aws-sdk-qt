// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFOLDERSREQUEST_P_H
#define QTAWS_LISTFOLDERSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listfoldersrequest.h"

namespace QtAws {
namespace QuickSight {

class ListFoldersRequest;

class ListFoldersRequestPrivate : public QuickSightRequestPrivate {

public:
    ListFoldersRequestPrivate(const QuickSightRequest::Action action,
                                   ListFoldersRequest * const q);
    ListFoldersRequestPrivate(const ListFoldersRequestPrivate &other,
                                   ListFoldersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFoldersRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
