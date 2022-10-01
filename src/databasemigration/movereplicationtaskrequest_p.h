// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEREPLICATIONTASKREQUEST_P_H
#define QTAWS_MOVEREPLICATIONTASKREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "movereplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class MoveReplicationTaskRequest;

class MoveReplicationTaskRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    MoveReplicationTaskRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   MoveReplicationTaskRequest * const q);
    MoveReplicationTaskRequestPrivate(const MoveReplicationTaskRequestPrivate &other,
                                   MoveReplicationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(MoveReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
