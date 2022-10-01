// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCETASKLOGSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstanceTaskLogsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationInstanceTaskLogsRequest : public DatabaseMigrationRequest {

public:
    DescribeReplicationInstanceTaskLogsRequest(const DescribeReplicationInstanceTaskLogsRequest &other);
    DescribeReplicationInstanceTaskLogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationInstanceTaskLogsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
