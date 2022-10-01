// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTASKREQUEST_P_H
#define QTAWS_STOPREPLICATIONTASKREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "stopreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StopReplicationTaskRequest;

class StopReplicationTaskRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    StopReplicationTaskRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   StopReplicationTaskRequest * const q);
    StopReplicationTaskRequestPrivate(const StopReplicationTaskRequestPrivate &other,
                                   StopReplicationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
