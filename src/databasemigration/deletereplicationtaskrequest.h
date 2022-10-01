// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKREQUEST_H
#define QTAWS_DELETEREPLICATIONTASKREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteReplicationTaskRequest : public DatabaseMigrationRequest {

public:
    DeleteReplicationTaskRequest(const DeleteReplicationTaskRequest &other);
    DeleteReplicationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
