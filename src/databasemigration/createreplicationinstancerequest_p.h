// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONINSTANCEREQUEST_P_H
#define QTAWS_CREATEREPLICATIONINSTANCEREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "createreplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationInstanceRequest;

class CreateReplicationInstanceRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    CreateReplicationInstanceRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   CreateReplicationInstanceRequest * const q);
    CreateReplicationInstanceRequestPrivate(const CreateReplicationInstanceRequestPrivate &other,
                                   CreateReplicationInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
