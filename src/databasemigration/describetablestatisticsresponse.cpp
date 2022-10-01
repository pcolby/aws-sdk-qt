// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetablestatisticsresponse.h"
#include "describetablestatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeTableStatisticsResponse
 * \brief The DescribeTableStatisticsResponse class provides an interace for DatabaseMigration DescribeTableStatistics responses.
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
 * \sa DatabaseMigrationClient::describeTableStatistics
 */

/*!
 * Constructs a DescribeTableStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTableStatisticsResponse::DescribeTableStatisticsResponse(
        const DescribeTableStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeTableStatisticsResponsePrivate(this), parent)
{
    setRequest(new DescribeTableStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTableStatisticsRequest * DescribeTableStatisticsResponse::request() const
{
    Q_D(const DescribeTableStatisticsResponse);
    return static_cast<const DescribeTableStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeTableStatistics \a response.
 */
void DescribeTableStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTableStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeTableStatisticsResponsePrivate
 * \brief The DescribeTableStatisticsResponsePrivate class provides private implementation for DescribeTableStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeTableStatisticsResponsePrivate object with public implementation \a q.
 */
DescribeTableStatisticsResponsePrivate::DescribeTableStatisticsResponsePrivate(
    DescribeTableStatisticsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeTableStatistics response element from \a xml.
 */
void DescribeTableStatisticsResponsePrivate::parseDescribeTableStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
