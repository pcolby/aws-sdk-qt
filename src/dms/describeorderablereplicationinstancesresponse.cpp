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

#include "describeorderablereplicationinstancesresponse.h"
#include "describeorderablereplicationinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DescribeOrderableReplicationInstancesResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeOrderableReplicationInstances responses.
 *
 * @see    DatabaseMigrationServiceClient::describeOrderableReplicationInstances
 */

/**
 * @brief  Constructs a new DescribeOrderableReplicationInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrderableReplicationInstancesResponse::DescribeOrderableReplicationInstancesResponse(
        const DescribeOrderableReplicationInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeOrderableReplicationInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeOrderableReplicationInstancesRequest(request));
    setReply(reply);
}

const DescribeOrderableReplicationInstancesRequest * DescribeOrderableReplicationInstancesResponse::request() const
{
    Q_D(const DescribeOrderableReplicationInstancesResponse);
    return static_cast<const DescribeOrderableReplicationInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeOrderableReplicationInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeOrderableReplicationInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOrderableReplicationInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeOrderableReplicationInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrderableReplicationInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOrderableReplicationInstancesResponse instance.
 */
DescribeOrderableReplicationInstancesResponsePrivate::DescribeOrderableReplicationInstancesResponsePrivate(
    DescribeOrderableReplicationInstancesQueueResponse * const q) : DescribeOrderableReplicationInstancesPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeOrderableReplicationInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOrderableReplicationInstancesResponsePrivate::DescribeOrderableReplicationInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrderableReplicationInstancesResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
