// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONSUBNETGROUPREQUEST_P_H
#define QTAWS_MODIFYREPLICATIONSUBNETGROUPREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "modifyreplicationsubnetgrouprequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationSubnetGroupRequest;

class ModifyReplicationSubnetGroupRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ModifyReplicationSubnetGroupRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ModifyReplicationSubnetGroupRequest * const q);
    ModifyReplicationSubnetGroupRequestPrivate(const ModifyReplicationSubnetGroupRequestPrivate &other,
                                   ModifyReplicationSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationSubnetGroupRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
