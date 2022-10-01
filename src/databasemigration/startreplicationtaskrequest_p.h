// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKREQUEST_P_H
#define QTAWS_STARTREPLICATIONTASKREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "startreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskRequest;

class StartReplicationTaskRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    StartReplicationTaskRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   StartReplicationTaskRequest * const q);
    StartReplicationTaskRequestPrivate(const StartReplicationTaskRequestPrivate &other,
                                   StartReplicationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
