// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGESBYCONTACTREQUEST_P_H
#define QTAWS_LISTPAGESBYCONTACTREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "listpagesbycontactrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPagesByContactRequest;

class ListPagesByContactRequestPrivate : public SsmContactsRequestPrivate {

public:
    ListPagesByContactRequestPrivate(const SsmContactsRequest::Action action,
                                   ListPagesByContactRequest * const q);
    ListPagesByContactRequestPrivate(const ListPagesByContactRequestPrivate &other,
                                   ListPagesByContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPagesByContactRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
