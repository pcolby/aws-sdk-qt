// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONTASKREQUEST_P_H
#define QTAWS_MODIFYREPLICATIONTASKREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "modifyreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationTaskRequest;

class ModifyReplicationTaskRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ModifyReplicationTaskRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ModifyReplicationTaskRequest * const q);
    ModifyReplicationTaskRequestPrivate(const ModifyReplicationTaskRequestPrivate &other,
                                   ModifyReplicationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
