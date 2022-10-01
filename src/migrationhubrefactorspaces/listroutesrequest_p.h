// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTESREQUEST_P_H
#define QTAWS_LISTROUTESREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "listroutesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListRoutesRequest;

class ListRoutesRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    ListRoutesRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   ListRoutesRequest * const q);
    ListRoutesRequestPrivate(const ListRoutesRequestPrivate &other,
                                   ListRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoutesRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
