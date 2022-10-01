// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "runfleetadvisorlsaanalysisresponse.h"
#include "runfleetadvisorlsaanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::RunFleetAdvisorLsaAnalysisResponse
 * \brief The RunFleetAdvisorLsaAnalysisResponse class provides an interace for DatabaseMigration RunFleetAdvisorLsaAnalysis responses.
 *
 * \inmodule QtAwsDatabaseMigration
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationClient::runFleetAdvisorLsaAnalysis
 */

/*!
 * Constructs a RunFleetAdvisorLsaAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
RunFleetAdvisorLsaAnalysisResponse::RunFleetAdvisorLsaAnalysisResponse(
        const RunFleetAdvisorLsaAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new RunFleetAdvisorLsaAnalysisResponsePrivate(this), parent)
{
    setRequest(new RunFleetAdvisorLsaAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RunFleetAdvisorLsaAnalysisRequest * RunFleetAdvisorLsaAnalysisResponse::request() const
{
    Q_D(const RunFleetAdvisorLsaAnalysisResponse);
    return static_cast<const RunFleetAdvisorLsaAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration RunFleetAdvisorLsaAnalysis \a response.
 */
void RunFleetAdvisorLsaAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RunFleetAdvisorLsaAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::RunFleetAdvisorLsaAnalysisResponsePrivate
 * \brief The RunFleetAdvisorLsaAnalysisResponsePrivate class provides private implementation for RunFleetAdvisorLsaAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a RunFleetAdvisorLsaAnalysisResponsePrivate object with public implementation \a q.
 */
RunFleetAdvisorLsaAnalysisResponsePrivate::RunFleetAdvisorLsaAnalysisResponsePrivate(
    RunFleetAdvisorLsaAnalysisResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration RunFleetAdvisorLsaAnalysis response element from \a xml.
 */
void RunFleetAdvisorLsaAnalysisResponsePrivate::parseRunFleetAdvisorLsaAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RunFleetAdvisorLsaAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
