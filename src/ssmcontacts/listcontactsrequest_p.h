// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSREQUEST_P_H
#define QTAWS_LISTCONTACTSREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "listcontactsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListContactsRequest;

class ListContactsRequestPrivate : public SsmContactsRequestPrivate {

public:
    ListContactsRequestPrivate(const SsmContactsRequest::Action action,
                                   ListContactsRequest * const q);
    ListContactsRequestPrivate(const ListContactsRequestPrivate &other,
                                   ListContactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
