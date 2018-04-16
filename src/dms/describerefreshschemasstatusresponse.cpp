/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The DescribeRefreshSchemasStatusResponse class encapsulates DatabaseMigrationService DescribeRefreshSchemasStatus responses.
 *
 * \ingroup DatabaseMigrationService
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
 * \sa DatabaseMigrationServiceClient::describeRefreshSchemasStatus
 */

/*!
 * @brief  Constructs a new DescribeRefreshSchemasStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const DescribeRefreshSchemasStatusRequest * DescribeRefreshSchemasStatusResponse::request() const
{
    Q_D(const DescribeRefreshSchemasStatusResponse);
    return static_cast<const DescribeRefreshSchemasStatusRequest *>(d->request);
}

/*!
 * @brief  Parse a DatabaseMigrationService DescribeRefreshSchemasStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeRefreshSchemasStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRefreshSchemasStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeRefreshSchemasStatusResponsePrivate
 *
 * \brief Private implementation for DescribeRefreshSchemasStatusResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeRefreshSchemasStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRefreshSchemasStatusResponse instance.
 */
DescribeRefreshSchemasStatusResponsePrivate::DescribeRefreshSchemasStatusResponsePrivate(
    DescribeRefreshSchemasStatusResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DatabaseMigrationService DescribeRefreshSchemasStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRefreshSchemasStatusResponsePrivate::parseDescribeRefreshSchemasStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRefreshSchemasStatusResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
