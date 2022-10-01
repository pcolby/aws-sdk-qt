// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERACCOUNTSREQUEST_P_H
#define QTAWS_LISTMEMBERACCOUNTSREQUEST_P_H

#include "fmsrequest_p.h"
#include "listmemberaccountsrequest.h"

namespace QtAws {
namespace Fms {

class ListMemberAccountsRequest;

class ListMemberAccountsRequestPrivate : public FmsRequestPrivate {

public:
    ListMemberAccountsRequestPrivate(const FmsRequest::Action action,
                                   ListMemberAccountsRequest * const q);
    ListMemberAccountsRequestPrivate(const ListMemberAccountsRequestPrivate &other,
                                   ListMemberAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMemberAccountsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
