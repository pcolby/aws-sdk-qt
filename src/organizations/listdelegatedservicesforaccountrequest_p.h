// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDSERVICESFORACCOUNTREQUEST_P_H
#define QTAWS_LISTDELEGATEDSERVICESFORACCOUNTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listdelegatedservicesforaccountrequest.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedServicesForAccountRequest;

class ListDelegatedServicesForAccountRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListDelegatedServicesForAccountRequestPrivate(const OrganizationsRequest::Action action,
                                   ListDelegatedServicesForAccountRequest * const q);
    ListDelegatedServicesForAccountRequestPrivate(const ListDelegatedServicesForAccountRequestPrivate &other,
                                   ListDelegatedServicesForAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDelegatedServicesForAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
