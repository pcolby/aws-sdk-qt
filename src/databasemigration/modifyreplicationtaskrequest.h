// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONTASKREQUEST_H
#define QTAWS_MODIFYREPLICATIONTASKREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationTaskRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyReplicationTaskRequest : public DatabaseMigrationRequest {

public:
    ModifyReplicationTaskRequest(const ModifyReplicationTaskRequest &other);
    ModifyReplicationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
