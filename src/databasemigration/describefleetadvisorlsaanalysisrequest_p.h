// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORLSAANALYSISREQUEST_P_H
#define QTAWS_DESCRIBEFLEETADVISORLSAANALYSISREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describefleetadvisorlsaanalysisrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorLsaAnalysisRequest;

class DescribeFleetAdvisorLsaAnalysisRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeFleetAdvisorLsaAnalysisRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeFleetAdvisorLsaAnalysisRequest * const q);
    DescribeFleetAdvisorLsaAnalysisRequestPrivate(const DescribeFleetAdvisorLsaAnalysisRequestPrivate &other,
                                   DescribeFleetAdvisorLsaAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorLsaAnalysisRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
