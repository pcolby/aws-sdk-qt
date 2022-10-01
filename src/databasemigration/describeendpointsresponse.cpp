// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointsresponse.h"
#include "describeendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointsResponse
 * \brief The DescribeEndpointsResponse class provides an interace for DatabaseMigration DescribeEndpoints responses.
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
 * \sa DatabaseMigrationClient::describeEndpoints
 */

/*!
 * Constructs a DescribeEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointsResponse::DescribeEndpointsResponse(
        const DescribeEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeEndpointsResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointsRequest * DescribeEndpointsResponse::request() const
{
    Q_D(const DescribeEndpointsResponse);
    return static_cast<const DescribeEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeEndpoints \a response.
 */
void DescribeEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointsResponsePrivate
 * \brief The DescribeEndpointsResponsePrivate class provides private implementation for DescribeEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeEndpointsResponsePrivate object with public implementation \a q.
 */
DescribeEndpointsResponsePrivate::DescribeEndpointsResponsePrivate(
    DescribeEndpointsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeEndpoints response element from \a xml.
 */
void DescribeEndpointsResponsePrivate::parseDescribeEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
