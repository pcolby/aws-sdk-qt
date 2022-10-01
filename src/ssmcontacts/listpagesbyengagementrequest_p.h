// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPAGESBYENGAGEMENTREQUEST_P_H
#define QTAWS_LISTPAGESBYENGAGEMENTREQUEST_P_H

#include "ssmcontactsrequest_p.h"
#include "listpagesbyengagementrequest.h"

namespace QtAws {
namespace SsmContacts {

class ListPagesByEngagementRequest;

class ListPagesByEngagementRequestPrivate : public SsmContactsRequestPrivate {

public:
    ListPagesByEngagementRequestPrivate(const SsmContactsRequest::Action action,
                                   ListPagesByEngagementRequest * const q);
    ListPagesByEngagementRequestPrivate(const ListPagesByEngagementRequestPrivate &other,
                                   ListPagesByEngagementRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPagesByEngagementRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
