/*
    Copyright 2013-2018 Paul Colby

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

#include "describeendpointtypesresponse.h"
#include "describeendpointtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeEndpointTypesResponse
 * \brief The DescribeEndpointTypesResponse class provides an interace for DatabaseMigrationService DescribeEndpointTypes responses.
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
 *  For more information about AWS DMS, see the AWS DMS user guide at <a
 *  href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 *
 * \sa DatabaseMigrationServiceClient::describeEndpointTypes
 */

/*!
 * Constructs a DescribeEndpointTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointTypesResponse::DescribeEndpointTypesResponse(
        const DescribeEndpointTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeEndpointTypesResponsePrivate(this), parent)
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
 * Parses a successful DatabaseMigrationService DescribeEndpointTypes \a response.
 */
void DescribeEndpointTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEndpointTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeEndpointTypesResponsePrivate
 * \brief The DescribeEndpointTypesResponsePrivate class provides private implementation for DescribeEndpointTypesResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeEndpointTypesResponsePrivate object with public implementation \a q.
 */
DescribeEndpointTypesResponsePrivate::DescribeEndpointTypesResponsePrivate(
    DescribeEndpointTypesResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeEndpointTypes response element from \a xml.
 */
void DescribeEndpointTypesResponsePrivate::parseDescribeEndpointTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointTypesResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
