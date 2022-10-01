// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKREQUEST_P_H
#define QTAWS_DELETEREPLICATIONTASKREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deletereplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskRequest;

class DeleteReplicationTaskRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteReplicationTaskRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteReplicationTaskRequest * const q);
    DeleteReplicationTaskRequestPrivate(const DeleteReplicationTaskRequestPrivate &other,
                                   DeleteReplicationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
