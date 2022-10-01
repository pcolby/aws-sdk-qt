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

#include "describeorderablereplicationinstancesresponse.h"
#include "describeorderablereplicationinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeOrderableReplicationInstancesResponse
 * \brief The DescribeOrderableReplicationInstancesResponse class provides an interace for DatabaseMigrationService DescribeOrderableReplicationInstances responses.
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
 * \sa DatabaseMigrationServiceClient::describeOrderableReplicationInstances
 */

/*!
 * Constructs a DescribeOrderableReplicationInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOrderableReplicationInstancesResponse::DescribeOrderableReplicationInstancesResponse(
        const DescribeOrderableReplicationInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeOrderableReplicationInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeOrderableReplicationInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOrderableReplicationInstancesRequest * DescribeOrderableReplicationInstancesResponse::request() const
{
    Q_D(const DescribeOrderableReplicationInstancesResponse);
    return static_cast<const DescribeOrderableReplicationInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DescribeOrderableReplicationInstances \a response.
 */
void DescribeOrderableReplicationInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOrderableReplicationInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeOrderableReplicationInstancesResponsePrivate
 * \brief The DescribeOrderableReplicationInstancesResponsePrivate class provides private implementation for DescribeOrderableReplicationInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeOrderableReplicationInstancesResponsePrivate object with public implementation \a q.
 */
DescribeOrderableReplicationInstancesResponsePrivate::DescribeOrderableReplicationInstancesResponsePrivate(
    DescribeOrderableReplicationInstancesResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeOrderableReplicationInstances response element from \a xml.
 */
void DescribeOrderableReplicationInstancesResponsePrivate::parseDescribeOrderableReplicationInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrderableReplicationInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
