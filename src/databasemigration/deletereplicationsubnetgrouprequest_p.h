// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONSUBNETGROUPREQUEST_P_H
#define QTAWS_DELETEREPLICATIONSUBNETGROUPREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deletereplicationsubnetgrouprequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationSubnetGroupRequest;

class DeleteReplicationSubnetGroupRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteReplicationSubnetGroupRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteReplicationSubnetGroupRequest * const q);
    DeleteReplicationSubnetGroupRequestPrivate(const DeleteReplicationSubnetGroupRequestPrivate &other,
                                   DeleteReplicationSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationSubnetGroupRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
