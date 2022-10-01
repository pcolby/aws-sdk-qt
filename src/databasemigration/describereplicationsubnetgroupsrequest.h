// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSREQUEST_H
#define QTAWS_DESCRIBEREPLICATIONSUBNETGROUPSREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationSubnetGroupsRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationSubnetGroupsRequest : public DatabaseMigrationRequest {

public:
    DescribeReplicationSubnetGroupsRequest(const DescribeReplicationSubnetGroupsRequest &other);
    DescribeReplicationSubnetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationSubnetGroupsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
