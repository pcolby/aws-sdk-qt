// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORACCOUNTREQUEST_P_H
#define QTAWS_LISTHANDSHAKESFORACCOUNTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listhandshakesforaccountrequest.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForAccountRequest;

class ListHandshakesForAccountRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListHandshakesForAccountRequestPrivate(const OrganizationsRequest::Action action,
                                   ListHandshakesForAccountRequest * const q);
    ListHandshakesForAccountRequestPrivate(const ListHandshakesForAccountRequestPrivate &other,
                                   ListHandshakesForAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListHandshakesForAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
