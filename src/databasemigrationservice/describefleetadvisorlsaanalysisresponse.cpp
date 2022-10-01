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

#include "describefleetadvisorlsaanalysisresponse.h"
#include "describefleetadvisorlsaanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorLsaAnalysisResponse
 * \brief The DescribeFleetAdvisorLsaAnalysisResponse class provides an interace for DatabaseMigrationService DescribeFleetAdvisorLsaAnalysis responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
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
 * \sa DatabaseMigrationServiceClient::describeFleetAdvisorLsaAnalysis
 */

/*!
 * Constructs a DescribeFleetAdvisorLsaAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetAdvisorLsaAnalysisResponse::DescribeFleetAdvisorLsaAnalysisResponse(
        const DescribeFleetAdvisorLsaAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeFleetAdvisorLsaAnalysisResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetAdvisorLsaAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetAdvisorLsaAnalysisRequest * DescribeFleetAdvisorLsaAnalysisResponse::request() const
{
    Q_D(const DescribeFleetAdvisorLsaAnalysisResponse);
    return static_cast<const DescribeFleetAdvisorLsaAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DescribeFleetAdvisorLsaAnalysis \a response.
 */
void DescribeFleetAdvisorLsaAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetAdvisorLsaAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorLsaAnalysisResponsePrivate
 * \brief The DescribeFleetAdvisorLsaAnalysisResponsePrivate class provides private implementation for DescribeFleetAdvisorLsaAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeFleetAdvisorLsaAnalysisResponsePrivate object with public implementation \a q.
 */
DescribeFleetAdvisorLsaAnalysisResponsePrivate::DescribeFleetAdvisorLsaAnalysisResponsePrivate(
    DescribeFleetAdvisorLsaAnalysisResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeFleetAdvisorLsaAnalysis response element from \a xml.
 */
void DescribeFleetAdvisorLsaAnalysisResponsePrivate::parseDescribeFleetAdvisorLsaAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetAdvisorLsaAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
