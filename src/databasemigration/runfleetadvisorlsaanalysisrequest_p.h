// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNFLEETADVISORLSAANALYSISREQUEST_P_H
#define QTAWS_RUNFLEETADVISORLSAANALYSISREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "runfleetadvisorlsaanalysisrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RunFleetAdvisorLsaAnalysisRequest;

class RunFleetAdvisorLsaAnalysisRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    RunFleetAdvisorLsaAnalysisRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   RunFleetAdvisorLsaAnalysisRequest * const q);
    RunFleetAdvisorLsaAnalysisRequestPrivate(const RunFleetAdvisorLsaAnalysisRequestPrivate &other,
                                   RunFleetAdvisorLsaAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(RunFleetAdvisorLsaAnalysisRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
