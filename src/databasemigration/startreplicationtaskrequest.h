// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKREQUEST_H
#define QTAWS_STARTREPLICATIONTASKREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT StartReplicationTaskRequest : public DatabaseMigrationRequest {

public:
    StartReplicationTaskRequest(const StartReplicationTaskRequest &other);
    StartReplicationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
