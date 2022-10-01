// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSREQUEST_P_H
#define QTAWS_LISTCONTACTSREQUEST_P_H

#include "sesv2request_p.h"
#include "listcontactsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListContactsRequest;

class ListContactsRequestPrivate : public SESv2RequestPrivate {

public:
    ListContactsRequestPrivate(const SESv2Request::Action action,
                                   ListContactsRequest * const q);
    ListContactsRequestPrivate(const ListContactsRequestPrivate &other,
                                   ListContactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
