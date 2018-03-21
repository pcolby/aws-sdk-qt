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

#include "describereplicationinstancesresponse.h"
#include "describereplicationinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationInstancesResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeReplicationInstances responses.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationInstances
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationInstancesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationInstancesRequest(request));
    setReply(reply);
}

const DescribeReplicationInstancesRequest * DescribeReplicationInstancesResponse::request() const
{
    Q_D(const DescribeReplicationInstancesResponse);
    return static_cast<const DescribeReplicationInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeReplicationInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeReplicationInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReplicationInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeReplicationInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReplicationInstancesResponse instance.
 */
DescribeReplicationInstancesResponsePrivate::DescribeReplicationInstancesResponsePrivate(
    DescribeReplicationInstancesQueueResponse * const q) : DescribeReplicationInstancesPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeReplicationInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReplicationInstancesResponsePrivate::DescribeReplicationInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationInstancesResponse"));
    /// @todo
}
