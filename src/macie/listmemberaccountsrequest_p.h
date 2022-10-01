// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERACCOUNTSREQUEST_P_H
#define QTAWS_LISTMEMBERACCOUNTSREQUEST_P_H

#include "macierequest_p.h"
#include "listmemberaccountsrequest.h"

namespace QtAws {
namespace Macie {

class ListMemberAccountsRequest;

class ListMemberAccountsRequestPrivate : public MacieRequestPrivate {

public:
    ListMemberAccountsRequestPrivate(const MacieRequest::Action action,
                                   ListMemberAccountsRequest * const q);
    ListMemberAccountsRequestPrivate(const ListMemberAccountsRequestPrivate &other,
                                   ListMemberAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMemberAccountsRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
