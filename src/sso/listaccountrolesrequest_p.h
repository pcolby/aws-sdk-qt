// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTROLESREQUEST_P_H
#define QTAWS_LISTACCOUNTROLESREQUEST_P_H

#include "ssorequest_p.h"
#include "listaccountrolesrequest.h"

namespace QtAws {
namespace Sso {

class ListAccountRolesRequest;

class ListAccountRolesRequestPrivate : public SsoRequestPrivate {

public:
    ListAccountRolesRequestPrivate(const SsoRequest::Action action,
                                   ListAccountRolesRequest * const q);
    ListAccountRolesRequestPrivate(const ListAccountRolesRequestPrivate &other,
                                   ListAccountRolesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountRolesRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
