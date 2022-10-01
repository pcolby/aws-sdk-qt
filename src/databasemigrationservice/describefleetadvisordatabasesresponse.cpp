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

#include "describefleetadvisordatabasesresponse.h"
#include "describefleetadvisordatabasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorDatabasesResponse
 * \brief The DescribeFleetAdvisorDatabasesResponse class provides an interace for DatabaseMigrationService DescribeFleetAdvisorDatabases responses.
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
 * \sa DatabaseMigrationServiceClient::describeFleetAdvisorDatabases
 */

/*!
 * Constructs a DescribeFleetAdvisorDatabasesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetAdvisorDatabasesResponse::DescribeFleetAdvisorDatabasesResponse(
        const DescribeFleetAdvisorDatabasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeFleetAdvisorDatabasesResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetAdvisorDatabasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetAdvisorDatabasesRequest * DescribeFleetAdvisorDatabasesResponse::request() const
{
    Q_D(const DescribeFleetAdvisorDatabasesResponse);
    return static_cast<const DescribeFleetAdvisorDatabasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DescribeFleetAdvisorDatabases \a response.
 */
void DescribeFleetAdvisorDatabasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetAdvisorDatabasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeFleetAdvisorDatabasesResponsePrivate
 * \brief The DescribeFleetAdvisorDatabasesResponsePrivate class provides private implementation for DescribeFleetAdvisorDatabasesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeFleetAdvisorDatabasesResponsePrivate object with public implementation \a q.
 */
DescribeFleetAdvisorDatabasesResponsePrivate::DescribeFleetAdvisorDatabasesResponsePrivate(
    DescribeFleetAdvisorDatabasesResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeFleetAdvisorDatabases response element from \a xml.
 */
void DescribeFleetAdvisorDatabasesResponsePrivate::parseDescribeFleetAdvisorDatabasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetAdvisorDatabasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
