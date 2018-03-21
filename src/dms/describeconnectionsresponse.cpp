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

#include "describeconnectionsresponse.h"
#include "describeconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeConnectionsResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeConnections responses.
 *
 * @see    DatabaseMigrationServiceClient::describeConnections
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConnectionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeConnectionsRequest(request));
    setReply(reply);
}

const DescribeConnectionsRequest * DescribeConnectionsResponse::request() const
{
    Q_D(const DescribeConnectionsResponse);
    return static_cast<const DescribeConnectionsRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeConnections response.
 *
 * @param  response  Response to parse.
 */
void DescribeConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConnectionsResponsePrivate
 *
 * @brief  Private implementation for DescribeConnectionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConnectionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConnectionsResponse instance.
 */
DescribeConnectionsResponsePrivate::DescribeConnectionsResponsePrivate(
    DescribeConnectionsQueueResponse * const q) : DescribeConnectionsPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeConnectionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConnectionsResponsePrivate::DescribeConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConnectionsResponse"));
    /// @todo
}
