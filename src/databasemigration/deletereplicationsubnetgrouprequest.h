// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONSUBNETGROUPREQUEST_H
#define QTAWS_DELETEREPLICATIONSUBNETGROUPREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationSubnetGroupRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteReplicationSubnetGroupRequest : public DatabaseMigrationRequest {

public:
    DeleteReplicationSubnetGroupRequest(const DeleteReplicationSubnetGroupRequest &other);
    DeleteReplicationSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationSubnetGroupRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
