// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTREPLICATIONINSTANCEREQUEST_H
#define QTAWS_REBOOTREPLICATIONINSTANCEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RebootReplicationInstanceRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT RebootReplicationInstanceRequest : public DatabaseMigrationRequest {

public:
    RebootReplicationInstanceRequest(const RebootReplicationInstanceRequest &other);
    RebootReplicationInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootReplicationInstanceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
