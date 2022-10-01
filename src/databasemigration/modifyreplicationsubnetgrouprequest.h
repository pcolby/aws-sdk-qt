// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONSUBNETGROUPREQUEST_H
#define QTAWS_MODIFYREPLICATIONSUBNETGROUPREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationSubnetGroupRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyReplicationSubnetGroupRequest : public DatabaseMigrationRequest {

public:
    ModifyReplicationSubnetGroupRequest(const ModifyReplicationSubnetGroupRequest &other);
    ModifyReplicationSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationSubnetGroupRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
