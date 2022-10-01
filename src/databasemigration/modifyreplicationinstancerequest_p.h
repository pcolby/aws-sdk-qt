// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONINSTANCEREQUEST_P_H
#define QTAWS_MODIFYREPLICATIONINSTANCEREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "modifyreplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationInstanceRequest;

class ModifyReplicationInstanceRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ModifyReplicationInstanceRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ModifyReplicationInstanceRequest * const q);
    ModifyReplicationInstanceRequestPrivate(const ModifyReplicationInstanceRequestPrivate &other,
                                   ModifyReplicationInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
