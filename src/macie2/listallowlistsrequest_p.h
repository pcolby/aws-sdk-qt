// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALLOWLISTSREQUEST_P_H
#define QTAWS_LISTALLOWLISTSREQUEST_P_H

#include "macie2request_p.h"
#include "listallowlistsrequest.h"

namespace QtAws {
namespace Macie2 {

class ListAllowListsRequest;

class ListAllowListsRequestPrivate : public Macie2RequestPrivate {

public:
    ListAllowListsRequestPrivate(const Macie2Request::Action action,
                                   ListAllowListsRequest * const q);
    ListAllowListsRequestPrivate(const ListAllowListsRequestPrivate &other,
                                   ListAllowListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAllowListsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
