// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisordatabasesresponse.h"
#include "describefleetadvisordatabasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorDatabasesResponse
 * \brief The DescribeFleetAdvisorDatabasesResponse class provides an interace for DatabaseMigration DescribeFleetAdvisorDatabases responses.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorDatabases
 */

/*!
 * Constructs a DescribeFleetAdvisorDatabasesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetAdvisorDatabasesResponse::DescribeFleetAdvisorDatabasesResponse(
        const DescribeFleetAdvisorDatabasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeFleetAdvisorDatabasesResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigration DescribeFleetAdvisorDatabases \a response.
 */
void DescribeFleetAdvisorDatabasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetAdvisorDatabasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorDatabasesResponsePrivate
 * \brief The DescribeFleetAdvisorDatabasesResponsePrivate class provides private implementation for DescribeFleetAdvisorDatabasesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorDatabasesResponsePrivate object with public implementation \a q.
 */
DescribeFleetAdvisorDatabasesResponsePrivate::DescribeFleetAdvisorDatabasesResponsePrivate(
    DescribeFleetAdvisorDatabasesResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeFleetAdvisorDatabases response element from \a xml.
 */
void DescribeFleetAdvisorDatabasesResponsePrivate::parseDescribeFleetAdvisorDatabasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetAdvisorDatabasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
