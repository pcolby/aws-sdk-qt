// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONINSTANCEREQUEST_H
#define QTAWS_CREATEREPLICATIONINSTANCEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationInstanceRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateReplicationInstanceRequest : public DatabaseMigrationRequest {

public:
    CreateReplicationInstanceRequest(const CreateReplicationInstanceRequest &other);
    CreateReplicationInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
