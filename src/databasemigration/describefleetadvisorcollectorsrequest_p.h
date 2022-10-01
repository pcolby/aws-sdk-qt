// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORCOLLECTORSREQUEST_P_H
#define QTAWS_DESCRIBEFLEETADVISORCOLLECTORSREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describefleetadvisorcollectorsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorCollectorsRequest;

class DescribeFleetAdvisorCollectorsRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeFleetAdvisorCollectorsRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeFleetAdvisorCollectorsRequest * const q);
    DescribeFleetAdvisorCollectorsRequestPrivate(const DescribeFleetAdvisorCollectorsRequestPrivate &other,
                                   DescribeFleetAdvisorCollectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorCollectorsRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
