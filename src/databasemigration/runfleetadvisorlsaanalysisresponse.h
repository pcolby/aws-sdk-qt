// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNFLEETADVISORLSAANALYSISRESPONSE_H
#define QTAWS_RUNFLEETADVISORLSAANALYSISRESPONSE_H

#include "databasemigrationresponse.h"
#include "runfleetadvisorlsaanalysisrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RunFleetAdvisorLsaAnalysisResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT RunFleetAdvisorLsaAnalysisResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    RunFleetAdvisorLsaAnalysisResponse(const RunFleetAdvisorLsaAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RunFleetAdvisorLsaAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunFleetAdvisorLsaAnalysisResponse)
    Q_DISABLE_COPY(RunFleetAdvisorLsaAnalysisResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
