/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describerefreshschemasstatusresponse.h"
#include "describerefreshschemasstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeRefreshSchemasStatusResponse
 * \brief The DescribeRefreshSchemasStatusResponse class provides an interace for DatabaseMigrationService DescribeRefreshSchemasStatus responses.
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
 *  For more information about AWS DMS, see <a href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::describeRefreshSchemasStatus
 */

/*!
 * Constructs a DescribeRefreshSchemasStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRefreshSchemasStatusResponse::DescribeRefreshSchemasStatusResponse(
        const DescribeRefreshSchemasStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeRefreshSchemasStatusResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigrationService DescribeRefreshSchemasStatus \a response.
 */
void DescribeRefreshSchemasStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRefreshSchemasStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeRefreshSchemasStatusResponsePrivate
 * \brief The DescribeRefreshSchemasStatusResponsePrivate class provides private implementation for DescribeRefreshSchemasStatusResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeRefreshSchemasStatusResponsePrivate object with public implementation \a q.
 */
DescribeRefreshSchemasStatusResponsePrivate::DescribeRefreshSchemasStatusResponsePrivate(
    DescribeRefreshSchemasStatusResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeRefreshSchemasStatus response element from \a xml.
 */
void DescribeRefreshSchemasStatusResponsePrivate::parseDescribeRefreshSchemasStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRefreshSchemasStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
