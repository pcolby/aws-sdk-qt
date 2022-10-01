// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMIGRATIONTASKSREQUEST_P_H
#define QTAWS_LISTMIGRATIONTASKSREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "listmigrationtasksrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListMigrationTasksRequest;

class ListMigrationTasksRequestPrivate : public MigrationHubRequestPrivate {

public:
    ListMigrationTasksRequestPrivate(const MigrationHubRequest::Action action,
                                   ListMigrationTasksRequest * const q);
    ListMigrationTasksRequestPrivate(const ListMigrationTasksRequestPrivate &other,
                                   ListMigrationTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMigrationTasksRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
