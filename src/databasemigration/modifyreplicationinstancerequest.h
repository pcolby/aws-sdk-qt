// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONINSTANCEREQUEST_H
#define QTAWS_MODIFYREPLICATIONINSTANCEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationInstanceRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyReplicationInstanceRequest : public DatabaseMigrationRequest {

public:
    ModifyReplicationInstanceRequest(const ModifyReplicationInstanceRequest &other);
    ModifyReplicationInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
