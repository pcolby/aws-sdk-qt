// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONINSTANCEREQUEST_P_H
#define QTAWS_DELETEREPLICATIONINSTANCEREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deletereplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationInstanceRequest;

class DeleteReplicationInstanceRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteReplicationInstanceRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteReplicationInstanceRequest * const q);
    DeleteReplicationInstanceRequestPrivate(const DeleteReplicationInstanceRequestPrivate &other,
                                   DeleteReplicationInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
