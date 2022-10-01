// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGINGACCOUNTSREQUEST_P_H
#define QTAWS_LISTSTAGINGACCOUNTSREQUEST_P_H

#include "drsrequest_p.h"
#include "liststagingaccountsrequest.h"

namespace QtAws {
namespace Drs {

class ListStagingAccountsRequest;

class ListStagingAccountsRequestPrivate : public DrsRequestPrivate {

public:
    ListStagingAccountsRequestPrivate(const DrsRequest::Action action,
                                   ListStagingAccountsRequest * const q);
    ListStagingAccountsRequestPrivate(const ListStagingAccountsRequestPrivate &other,
                                   ListStagingAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStagingAccountsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
