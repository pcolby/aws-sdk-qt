// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREFRESHSCHEMASSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEREFRESHSCHEMASSTATUSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describerefreshschemasstatusrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeRefreshSchemasStatusRequest;

class DescribeRefreshSchemasStatusRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeRefreshSchemasStatusRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeRefreshSchemasStatusRequest * const q);
    DescribeRefreshSchemasStatusRequestPrivate(const DescribeRefreshSchemasStatusRequestPrivate &other,
                                   DescribeRefreshSchemasStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRefreshSchemasStatusRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
