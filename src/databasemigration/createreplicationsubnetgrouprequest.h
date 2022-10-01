// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSUBNETGROUPREQUEST_H
#define QTAWS_CREATEREPLICATIONSUBNETGROUPREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationSubnetGroupRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateReplicationSubnetGroupRequest : public DatabaseMigrationRequest {

public:
    CreateReplicationSubnetGroupRequest(const CreateReplicationSubnetGroupRequest &other);
    CreateReplicationSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationSubnetGroupRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
