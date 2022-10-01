// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTASKREQUEST_H
#define QTAWS_STOPREPLICATIONTASKREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StopReplicationTaskRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT StopReplicationTaskRequest : public DatabaseMigrationRequest {

public:
    StopReplicationTaskRequest(const StopReplicationTaskRequest &other);
    StopReplicationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopReplicationTaskRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
