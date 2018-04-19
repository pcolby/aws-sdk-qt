/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereplicationtaskassessmentresultsresponse.h"
#include "describereplicationtaskassessmentresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeReplicationTaskAssessmentResultsResponse
 * \brief The DescribeReplicationTaskAssessmentResultsResponse class provides an interace for DatabaseMigrationService DescribeReplicationTaskAssessmentResults responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::describeReplicationTaskAssessmentResults
 */

/*!
 * Constructs a DescribeReplicationTaskAssessmentResultsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationTaskAssessmentResultsResponse::DescribeReplicationTaskAssessmentResultsResponse(
        const DescribeReplicationTaskAssessmentResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationTaskAssessmentResultsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationTaskAssessmentResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationTaskAssessmentResultsRequest * DescribeReplicationTaskAssessmentResultsResponse::request() const
{
    Q_D(const DescribeReplicationTaskAssessmentResultsResponse);
    return static_cast<const DescribeReplicationTaskAssessmentResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DescribeReplicationTaskAssessmentResults \a response.
 */
void DescribeReplicationTaskAssessmentResultsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReplicationTaskAssessmentResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeReplicationTaskAssessmentResultsResponsePrivate
 * \brief The DescribeReplicationTaskAssessmentResultsResponsePrivate class provides private implementation for DescribeReplicationTaskAssessmentResultsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeReplicationTaskAssessmentResultsResponsePrivate object with public implementation \a q.
 */
DescribeReplicationTaskAssessmentResultsResponsePrivate::DescribeReplicationTaskAssessmentResultsResponsePrivate(
    DescribeReplicationTaskAssessmentResultsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeReplicationTaskAssessmentResults response element from \a xml.
 */
void DescribeReplicationTaskAssessmentResultsResponsePrivate::parseDescribeReplicationTaskAssessmentResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationTaskAssessmentResultsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
