// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEREPLICATIONTASKREQUEST_H
#define QTAWS_MOVEREPLICATIONTASKREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class MoveReplicationTaskRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT MoveReplicationTaskRequest : public DatabaseMigrationRequest {

public:
    MoveReplicationTaskRequest(const MoveReplicationTaskRequest &other);
    MoveReplicationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
