/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describerefreshschemasstatusresponse.h"
#include "describerefreshschemasstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeRefreshSchemasStatusResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeRefreshSchemasStatus responses.
 *
 * @see    DatabaseMigrationServiceClient::describeRefreshSchemasStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRefreshSchemasStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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

/**
 * @brief  Parse a DatabaseMigrationService DescribeRefreshSchemasStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeRefreshSchemasStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRefreshSchemasStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeRefreshSchemasStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRefreshSchemasStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRefreshSchemasStatusResponse instance.
 */
DescribeRefreshSchemasStatusResponsePrivate::DescribeRefreshSchemasStatusResponsePrivate(
    DescribeRefreshSchemasStatusQueueResponse * const q) : DescribeRefreshSchemasStatusPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeRefreshSchemasStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRefreshSchemasStatusResponsePrivate::DescribeRefreshSchemasStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRefreshSchemasStatusResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
