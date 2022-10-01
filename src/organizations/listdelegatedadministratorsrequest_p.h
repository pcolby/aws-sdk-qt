// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINISTRATORSREQUEST_P_H
#define QTAWS_LISTDELEGATEDADMINISTRATORSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "listdelegatedadministratorsrequest.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedAdministratorsRequest;

class ListDelegatedAdministratorsRequestPrivate : public OrganizationsRequestPrivate {

public:
    ListDelegatedAdministratorsRequestPrivate(const OrganizationsRequest::Action action,
                                   ListDelegatedAdministratorsRequest * const q);
    ListDelegatedAdministratorsRequestPrivate(const ListDelegatedAdministratorsRequestPrivate &other,
                                   ListDelegatedAdministratorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDelegatedAdministratorsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
