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

#include "describefleetadvisorcollectorsresponse.h"
#include "describefleetadvisorcollectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorCollectorsResponse
 * \brief The DescribeFleetAdvisorCollectorsResponse class provides an interace for DatabaseMigration DescribeFleetAdvisorCollectors responses.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorCollectors
 */

/*!
 * Constructs a DescribeFleetAdvisorCollectorsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetAdvisorCollectorsResponse::DescribeFleetAdvisorCollectorsResponse(
        const DescribeFleetAdvisorCollectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeFleetAdvisorCollectorsResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetAdvisorCollectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetAdvisorCollectorsRequest * DescribeFleetAdvisorCollectorsResponse::request() const
{
    Q_D(const DescribeFleetAdvisorCollectorsResponse);
    return static_cast<const DescribeFleetAdvisorCollectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeFleetAdvisorCollectors \a response.
 */
void DescribeFleetAdvisorCollectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetAdvisorCollectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorCollectorsResponsePrivate
 * \brief The DescribeFleetAdvisorCollectorsResponsePrivate class provides private implementation for DescribeFleetAdvisorCollectorsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorCollectorsResponsePrivate object with public implementation \a q.
 */
DescribeFleetAdvisorCollectorsResponsePrivate::DescribeFleetAdvisorCollectorsResponsePrivate(
    DescribeFleetAdvisorCollectorsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeFleetAdvisorCollectors response element from \a xml.
 */
void DescribeFleetAdvisorCollectorsResponsePrivate::parseDescribeFleetAdvisorCollectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetAdvisorCollectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
