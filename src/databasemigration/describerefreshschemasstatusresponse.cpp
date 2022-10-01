// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerefreshschemasstatusresponse.h"
#include "describerefreshschemasstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeRefreshSchemasStatusResponse
 * \brief The DescribeRefreshSchemasStatusResponse class provides an interace for DatabaseMigration DescribeRefreshSchemasStatus responses.
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
 * \sa DatabaseMigrationClient::describeRefreshSchemasStatus
 */

/*!
 * Constructs a DescribeRefreshSchemasStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRefreshSchemasStatusResponse::DescribeRefreshSchemasStatusResponse(
        const DescribeRefreshSchemasStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeRefreshSchemasStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeRefreshSchemasStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRefreshSchemasStatusRequest * DescribeRefreshSchemasStatusResponse::request() const
{
    Q_D(const DescribeRefreshSchemasStatusResponse);
    return static_cast<const DescribeRefreshSchemasStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeRefreshSchemasStatus \a response.
 */
void DescribeRefreshSchemasStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRefreshSchemasStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeRefreshSchemasStatusResponsePrivate
 * \brief The DescribeRefreshSchemasStatusResponsePrivate class provides private implementation for DescribeRefreshSchemasStatusResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeRefreshSchemasStatusResponsePrivate object with public implementation \a q.
 */
DescribeRefreshSchemasStatusResponsePrivate::DescribeRefreshSchemasStatusResponsePrivate(
    DescribeRefreshSchemasStatusResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeRefreshSchemasStatus response element from \a xml.
 */
void DescribeRefreshSchemasStatusResponsePrivate::parseDescribeRefreshSchemasStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRefreshSchemasStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
