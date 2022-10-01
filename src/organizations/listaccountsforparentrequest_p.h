// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPARENTREQUEST_P_H
#define QTAWS_LISTACCOUNTSFORPARENTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listaccountsforparentrequest.h"

namespace QtAws {
namespace Organizations {

class ListAccountsForParentRequest;

class ListAccountsForParentRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListAccountsForParentRequestPrivate(const OrganizationsRequest::Action action,
                                   ListAccountsForParentRequest * const q);
    ListAccountsForParentRequestPrivate(const ListAccountsForParentRequestPrivate &other,
                                   ListAccountsForParentRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountsForParentRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
