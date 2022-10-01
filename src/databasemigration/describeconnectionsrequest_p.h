// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONSREQUEST_P_H
#define QTAWS_DESCRIBECONNECTIONSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describeconnectionsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeConnectionsRequest;

class DescribeConnectionsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeConnectionsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeConnectionsRequest * const q);
    DescribeConnectionsRequestPrivate(const DescribeConnectionsRequestPrivate &other,
                                   DescribeConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectionsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
