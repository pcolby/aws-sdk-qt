// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNFLEETADVISORLSAANALYSISRESPONSE_P_H
#define QTAWS_RUNFLEETADVISORLSAANALYSISRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class RunFleetAdvisorLsaAnalysisResponse;

class RunFleetAdvisorLsaAnalysisResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit RunFleetAdvisorLsaAnalysisResponsePrivate(RunFleetAdvisorLsaAnalysisResponse * const q);

    void parseRunFleetAdvisorLsaAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RunFleetAdvisorLsaAnalysisResponse)
    Q_DISABLE_COPY(RunFleetAdvisorLsaAnalysisResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
