// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTLISTSREQUEST_P_H
#define QTAWS_LISTCONTACTLISTSREQUEST_P_H

#include "sesv2request_p.h"
#include "listcontactlistsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListContactListsRequest;

class ListContactListsRequestPrivate : public SESv2RequestPrivate {

public:
    ListContactListsRequestPrivate(const SESv2Request::Action action,
                                   ListContactListsRequest * const q);
    ListContactListsRequestPrivate(const ListContactListsRequestPrivate &other,
                                   ListContactListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactListsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
