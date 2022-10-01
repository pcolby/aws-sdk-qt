// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSREQUEST_P_H
#define QTAWS_LISTACCOUNTSREQUEST_P_H

#include "chimerequest_p.h"
#include "listaccountsrequest.h"

namespace QtAws {
namespace Chime {

class ListAccountsRequest;

class ListAccountsRequestPrivate : public ChimeRequestPrivate {

public:
    ListAccountsRequestPrivate(const ChimeRequest::Action action,
                                   ListAccountsRequest * const q);
    ListAccountsRequestPrivate(const ListAccountsRequestPrivate &other,
                                   ListAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
