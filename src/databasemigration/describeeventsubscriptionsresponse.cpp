// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsubscriptionsresponse.h"
#include "describeeventsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeEventSubscriptionsResponse
 * \brief The DescribeEventSubscriptionsResponse class provides an interace for DatabaseMigration DescribeEventSubscriptions responses.
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
 * \sa DatabaseMigrationClient::describeEventSubscriptions
 */

/*!
 * Constructs a DescribeEventSubscriptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventSubscriptionsResponse::DescribeEventSubscriptionsResponse(
        const DescribeEventSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeEventSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventSubscriptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventSubscriptionsRequest * DescribeEventSubscriptionsResponse::request() const
{
    Q_D(const DescribeEventSubscriptionsResponse);
    return static_cast<const DescribeEventSubscriptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeEventSubscriptions \a response.
 */
void DescribeEventSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventSubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeEventSubscriptionsResponsePrivate
 * \brief The DescribeEventSubscriptionsResponsePrivate class provides private implementation for DescribeEventSubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeEventSubscriptionsResponsePrivate object with public implementation \a q.
 */
DescribeEventSubscriptionsResponsePrivate::DescribeEventSubscriptionsResponsePrivate(
    DescribeEventSubscriptionsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeEventSubscriptions response element from \a xml.
 */
void DescribeEventSubscriptionsResponsePrivate::parseDescribeEventSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventSubscriptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
