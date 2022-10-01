// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeschemasresponse.h"
#include "describeschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeSchemasResponse
 * \brief The DescribeSchemasResponse class provides an interace for DatabaseMigration DescribeSchemas responses.
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
 * \sa DatabaseMigrationClient::describeSchemas
 */

/*!
 * Constructs a DescribeSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSchemasResponse::DescribeSchemasResponse(
        const DescribeSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeSchemasResponsePrivate(this), parent)
{
    setRequest(new DescribeSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSchemasRequest * DescribeSchemasResponse::request() const
{
    Q_D(const DescribeSchemasResponse);
    return static_cast<const DescribeSchemasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeSchemas \a response.
 */
void DescribeSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeSchemasResponsePrivate
 * \brief The DescribeSchemasResponsePrivate class provides private implementation for DescribeSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeSchemasResponsePrivate object with public implementation \a q.
 */
DescribeSchemasResponsePrivate::DescribeSchemasResponsePrivate(
    DescribeSchemasResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeSchemas response element from \a xml.
 */
void DescribeSchemasResponsePrivate::parseDescribeSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
