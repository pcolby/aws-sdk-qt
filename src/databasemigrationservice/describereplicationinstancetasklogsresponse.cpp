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

#include "describereplicationinstancetasklogsresponse.h"
#include "describereplicationinstancetasklogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeReplicationInstanceTaskLogsResponse
 * \brief The DescribeReplicationInstanceTaskLogsResponse class provides an interace for DatabaseMigrationService DescribeReplicationInstanceTaskLogs responses.
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
 * \sa DatabaseMigrationServiceClient::describeReplicationInstanceTaskLogs
 */

/*!
 * Constructs a DescribeReplicationInstanceTaskLogsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationInstanceTaskLogsResponse::DescribeReplicationInstanceTaskLogsResponse(
        const DescribeReplicationInstanceTaskLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationInstanceTaskLogsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationInstanceTaskLogsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationInstanceTaskLogsRequest * DescribeReplicationInstanceTaskLogsResponse::request() const
{
    Q_D(const DescribeReplicationInstanceTaskLogsResponse);
    return static_cast<const DescribeReplicationInstanceTaskLogsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DescribeReplicationInstanceTaskLogs \a response.
 */
void DescribeReplicationInstanceTaskLogsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReplicationInstanceTaskLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeReplicationInstanceTaskLogsResponsePrivate
 * \brief The DescribeReplicationInstanceTaskLogsResponsePrivate class provides private implementation for DescribeReplicationInstanceTaskLogsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeReplicationInstanceTaskLogsResponsePrivate object with public implementation \a q.
 */
DescribeReplicationInstanceTaskLogsResponsePrivate::DescribeReplicationInstanceTaskLogsResponsePrivate(
    DescribeReplicationInstanceTaskLogsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeReplicationInstanceTaskLogs response element from \a xml.
 */
void DescribeReplicationInstanceTaskLogsResponsePrivate::parseDescribeReplicationInstanceTaskLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationInstanceTaskLogsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
