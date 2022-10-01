// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSREQUEST_P_H
#define QTAWS_LISTMEMBERSREQUEST_P_H

#include "inspector2request_p.h"
#include "listmembersrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListMembersRequest;

class ListMembersRequestPrivate : public Inspector2RequestPrivate {

public:
    ListMembersRequestPrivate(const Inspector2Request::Action action,
                                   ListMembersRequest * const q);
    ListMembersRequestPrivate(const ListMembersRequestPrivate &other,
                                   ListMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMembersRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
