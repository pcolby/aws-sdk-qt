// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTCHANNELSREQUEST_P_H
#define QTAWS_LISTCONTACTCHANNELSREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "listcontactchannelsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListContactChannelsRequest;

class ListContactChannelsRequestPrivate : public SsmContactsRequestPrivate {

public:
    ListContactChannelsRequestPrivate(const SsmContactsRequest::Action action,
                                   ListContactChannelsRequest * const q);
    ListContactChannelsRequestPrivate(const ListContactChannelsRequestPrivate &other,
                                   ListContactChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactChannelsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
