// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLESTATISTICSREQUEST_P_H
#define QTAWS_DESCRIBETABLESTATISTICSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describetablestatisticsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeTableStatisticsRequest;

class DescribeTableStatisticsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeTableStatisticsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeTableStatisticsRequest * const q);
    DescribeTableStatisticsRequestPrivate(const DescribeTableStatisticsRequestPrivate &other,
                                   DescribeTableStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTableStatisticsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
