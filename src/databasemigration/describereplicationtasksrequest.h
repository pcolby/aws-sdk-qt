// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONTASKSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTasksRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTasksRequest : public DatabaseMigrationRequest {

public:
    DescribeReplicationTasksRequest(const DescribeReplicationTasksRequest &other);
    DescribeReplicationTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTasksRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
