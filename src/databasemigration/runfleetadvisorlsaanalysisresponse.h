/*
    Copyright 2013-2021 Paul Colby

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
