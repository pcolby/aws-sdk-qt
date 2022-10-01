// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationinstancetasklogsresponse.h"
#include "describereplicationinstancetasklogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationInstanceTaskLogsResponse
 * \brief The DescribeReplicationInstanceTaskLogsResponse class provides an interace for DatabaseMigration DescribeReplicationInstanceTaskLogs responses.
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
 * \sa DatabaseMigrationClient::describeReplicationInstanceTaskLogs
 */

/*!
 * Constructs a DescribeReplicationInstanceTaskLogsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationInstanceTaskLogsResponse::DescribeReplicationInstanceTaskLogsResponse(
        const DescribeReplicationInstanceTaskLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeReplicationInstanceTaskLogsResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigration DescribeReplicationInstanceTaskLogs \a response.
 */
void DescribeReplicationInstanceTaskLogsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationInstanceTaskLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationInstanceTaskLogsResponsePrivate
 * \brief The DescribeReplicationInstanceTaskLogsResponsePrivate class provides private implementation for DescribeReplicationInstanceTaskLogsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationInstanceTaskLogsResponsePrivate object with public implementation \a q.
 */
DescribeReplicationInstanceTaskLogsResponsePrivate::DescribeReplicationInstanceTaskLogsResponsePrivate(
    DescribeReplicationInstanceTaskLogsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeReplicationInstanceTaskLogs response element from \a xml.
 */
void DescribeReplicationInstanceTaskLogsResponsePrivate::parseDescribeReplicationInstanceTaskLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationInstanceTaskLogsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
