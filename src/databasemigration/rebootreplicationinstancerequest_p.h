// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTREPLICATIONINSTANCEREQUEST_P_H
#define QTAWS_REBOOTREPLICATIONINSTANCEREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "rebootreplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RebootReplicationInstanceRequest;

class RebootReplicationInstanceRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    RebootReplicationInstanceRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   RebootReplicationInstanceRequest * const q);
    RebootReplicationInstanceRequestPrivate(const RebootReplicationInstanceRequestPrivate &other,
                                   RebootReplicationInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RebootReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
