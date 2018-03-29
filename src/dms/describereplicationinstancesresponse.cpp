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

#include "describereplicationinstancesresponse.h"
#include "describereplicationinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationInstancesResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeReplicationInstances responses.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationInstances
 */

/**
 * @brief  Constructs a new DescribeReplicationInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationInstancesResponse::DescribeReplicationInstancesResponse(
        const DescribeReplicationInstancesRequest &request,
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
    Q_D(DescribeReplicationInstancesResponse);
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
    DescribeReplicationInstancesResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
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

} // namespace DatabaseMigrationService
} // namespace QtAws
