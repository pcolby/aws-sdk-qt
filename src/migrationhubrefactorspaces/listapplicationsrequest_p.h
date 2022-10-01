// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONSREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "listapplicationsrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListApplicationsRequest;

class ListApplicationsRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    ListApplicationsRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   ListApplicationsRequest * const q);
    ListApplicationsRequestPrivate(const ListApplicationsRequestPrivate &other,
                                   ListApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationsRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
