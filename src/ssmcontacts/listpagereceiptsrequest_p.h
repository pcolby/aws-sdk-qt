// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGERECEIPTSREQUEST_P_H
#define QTAWS_LISTPAGERECEIPTSREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "listpagereceiptsrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPageReceiptsRequest;

class ListPageReceiptsRequestPrivate : public SsmContactsRequestPrivate {

public:
    ListPageReceiptsRequestPrivate(const SsmContactsRequest::Action action,
                                   ListPageReceiptsRequest * const q);
    ListPageReceiptsRequestPrivate(const ListPageReceiptsRequestPrivate &other,
                                   ListPageReceiptsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPageReceiptsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
