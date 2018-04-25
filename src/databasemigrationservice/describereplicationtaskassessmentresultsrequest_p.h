/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSREQUEST_P_H
#define QTAWS_DESCRIBEREPLICATIONTASKASSESSMENTRESULTSREQUEST_P_H

#include "databasemigrationservicerequest_p.h"
#include "describereplicationtaskassessmentresultsrequest.h"

namespace QtAws {
namespace DatabaseMigrationService {

class DescribeReplicationTaskAssessmentResultsRequest;

class QTAWS_EXPORT DescribeReplicationTaskAssessmentResultsRequestPrivate : public DatabaseMigrationServiceRequestPrivate {

public:
    DescribeReplicationTaskAssessmentResultsRequestPrivate(const DatabaseMigrationServiceRequest::Action action,
                                   DescribeReplicationTaskAssessmentResultsRequest * const q);
    DescribeReplicationTaskAssessmentResultsRequestPrivate(const DescribeReplicationTaskAssessmentResultsRequestPrivate &other,
                                   DescribeReplicationTaskAssessmentResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplicationTaskAssessmentResultsRequest)

};

} // namespace DatabaseMigrationService
} // namespace QtAws

#endif
