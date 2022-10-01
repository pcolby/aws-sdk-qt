// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSUBNETGROUPREQUEST_P_H
#define QTAWS_CREATEREPLICATIONSUBNETGROUPREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "createreplicationsubnetgrouprequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationSubnetGroupRequest;

class CreateReplicationSubnetGroupRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    CreateReplicationSubnetGroupRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   CreateReplicationSubnetGroupRequest * const q);
    CreateReplicationSubnetGroupRequestPrivate(const CreateReplicationSubnetGroupRequestPrivate &other,
                                   CreateReplicationSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateReplicationSubnetGroupRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
