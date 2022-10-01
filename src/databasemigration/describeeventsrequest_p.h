// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEventsRequest;

class DescribeEventsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeEventsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeEventsRequest * const q);
    DescribeEventsRequestPrivate(const DescribeEventsRequestPrivate &other,
                                   DescribeEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
