// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETADVISORDATABASESREQUEST_P_H
#define QTAWS_DELETEFLEETADVISORDATABASESREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deletefleetadvisordatabasesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteFleetAdvisorDatabasesRequest;

class DeleteFleetAdvisorDatabasesRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteFleetAdvisorDatabasesRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteFleetAdvisorDatabasesRequest * const q);
    DeleteFleetAdvisorDatabasesRequestPrivate(const DeleteFleetAdvisorDatabasesRequestPrivate &other,
                                   DeleteFleetAdvisorDatabasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFleetAdvisorDatabasesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
