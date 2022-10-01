// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSREQUEST_P_H
#define QTAWS_LISTACCOUNTSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listaccountsrequest.h"

namespace QtAws {
namespace Organizations {

class ListAccountsRequest;

class ListAccountsRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListAccountsRequestPrivate(const OrganizationsRequest::Action action,
                                   ListAccountsRequest * const q);
    ListAccountsRequestPrivate(const ListAccountsRequestPrivate &other,
                                   ListAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
