// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONTASKREQUEST_P_H
#define QTAWS_CREATEREPLICATIONTASKREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "createreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationTaskRequest;

class CreateReplicationTaskRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    CreateReplicationTaskRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   CreateReplicationTaskRequest * const q);
    CreateReplicationTaskRequestPrivate(const CreateReplicationTaskRequestPrivate &other,
                                   CreateReplicationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
