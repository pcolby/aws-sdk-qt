// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONINSTANCESREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONINSTANCESREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationInstancesRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationInstancesRequest : public DatabaseMigrationRequest {

public:
    DescribeReplicationInstancesRequest(const DescribeReplicationInstancesRequest &other);
    DescribeReplicationInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationInstancesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
