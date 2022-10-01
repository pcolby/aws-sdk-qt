// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSREQUEST_P_H
#define QTAWS_LISTACCOUNTSREQUEST_P_H

#include "ssorequest_p.h"
#include "listaccountsrequest.h"

namespace QtAws {
namespace Sso {

class ListAccountsRequest;

class ListAccountsRequestPrivate : public SsoRequestPrivate {

public:
    ListAccountsRequestPrivate(const SsoRequest::Action action,
                                   ListAccountsRequest * const q);
    ListAccountsRequestPrivate(const ListAccountsRequestPrivate &other,
                                   ListAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountsRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
