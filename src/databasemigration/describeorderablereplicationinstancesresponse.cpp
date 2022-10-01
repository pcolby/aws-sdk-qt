// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeorderablereplicationinstancesresponse.h"
#include "describeorderablereplicationinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeOrderableReplicationInstancesResponse
 * \brief The DescribeOrderableReplicationInstancesResponse class provides an interace for DatabaseMigration DescribeOrderableReplicationInstances responses.
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
 * \sa DatabaseMigrationClient::describeOrderableReplicationInstances
 */

/*!
 * Constructs a DescribeOrderableReplicationInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOrderableReplicationInstancesResponse::DescribeOrderableReplicationInstancesResponse(
        const DescribeOrderableReplicationInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeOrderableReplicationInstancesResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigration DescribeOrderableReplicationInstances \a response.
 */
void DescribeOrderableReplicationInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOrderableReplicationInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeOrderableReplicationInstancesResponsePrivate
 * \brief The DescribeOrderableReplicationInstancesResponsePrivate class provides private implementation for DescribeOrderableReplicationInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeOrderableReplicationInstancesResponsePrivate object with public implementation \a q.
 */
DescribeOrderableReplicationInstancesResponsePrivate::DescribeOrderableReplicationInstancesResponsePrivate(
    DescribeOrderableReplicationInstancesResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeOrderableReplicationInstances response element from \a xml.
 */
void DescribeOrderableReplicationInstancesResponsePrivate::parseDescribeOrderableReplicationInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrderableReplicationInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
