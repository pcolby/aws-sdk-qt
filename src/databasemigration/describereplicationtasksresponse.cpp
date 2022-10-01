// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationtasksresponse.h"
#include "describereplicationtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTasksResponse
 * \brief The DescribeReplicationTasksResponse class provides an interace for DatabaseMigration DescribeReplicationTasks responses.
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
 * \sa DatabaseMigrationClient::describeReplicationTasks
 */

/*!
 * Constructs a DescribeReplicationTasksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationTasksResponse::DescribeReplicationTasksResponse(
        const DescribeReplicationTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeReplicationTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationTasksRequest * DescribeReplicationTasksResponse::request() const
{
    Q_D(const DescribeReplicationTasksResponse);
    return static_cast<const DescribeReplicationTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeReplicationTasks \a response.
 */
void DescribeReplicationTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTasksResponsePrivate
 * \brief The DescribeReplicationTasksResponsePrivate class provides private implementation for DescribeReplicationTasksResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationTasksResponsePrivate object with public implementation \a q.
 */
DescribeReplicationTasksResponsePrivate::DescribeReplicationTasksResponsePrivate(
    DescribeReplicationTasksResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeReplicationTasks response element from \a xml.
 */
void DescribeReplicationTasksResponsePrivate::parseDescribeReplicationTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
