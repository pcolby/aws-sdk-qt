// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONINSTANCEREQUEST_H
#define QTAWS_DELETEREPLICATIONINSTANCEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationInstanceRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteReplicationInstanceRequest : public DatabaseMigrationRequest {

public:
    DeleteReplicationInstanceRequest(const DeleteReplicationInstanceRequest &other);
    DeleteReplicationInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
