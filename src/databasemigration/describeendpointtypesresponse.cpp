// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointtypesresponse.h"
#include "describeendpointtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointTypesResponse
 * \brief The DescribeEndpointTypesResponse class provides an interace for DatabaseMigration DescribeEndpointTypes responses.
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
 * \sa DatabaseMigrationClient::describeEndpointTypes
 */

/*!
 * Constructs a DescribeEndpointTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointTypesResponse::DescribeEndpointTypesResponse(
        const DescribeEndpointTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeEndpointTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointTypesRequest * DescribeEndpointTypesResponse::request() const
{
    Q_D(const DescribeEndpointTypesResponse);
    return static_cast<const DescribeEndpointTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeEndpointTypes \a response.
 */
void DescribeEndpointTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeEndpointTypesResponsePrivate
 * \brief The DescribeEndpointTypesResponsePrivate class provides private implementation for DescribeEndpointTypesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeEndpointTypesResponsePrivate object with public implementation \a q.
 */
DescribeEndpointTypesResponsePrivate::DescribeEndpointTypesResponsePrivate(
    DescribeEndpointTypesResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeEndpointTypes response element from \a xml.
 */
void DescribeEndpointTypesResponsePrivate::parseDescribeEndpointTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
