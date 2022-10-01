// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINACCOUNTSREQUEST_P_H
#define QTAWS_LISTDELEGATEDADMINACCOUNTSREQUEST_P_H

#include "inspector2request_p.h"
#include "listdelegatedadminaccountsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListDelegatedAdminAccountsRequest;

class ListDelegatedAdminAccountsRequestPrivate : public Inspector2RequestPrivate {

public:
    ListDelegatedAdminAccountsRequestPrivate(const Inspector2Request::Action action,
                                   ListDelegatedAdminAccountsRequest * const q);
    ListDelegatedAdminAccountsRequestPrivate(const ListDelegatedAdminAccountsRequestPrivate &other,
                                   ListDelegatedAdminAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDelegatedAdminAccountsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
