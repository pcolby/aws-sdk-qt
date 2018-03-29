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

#include "describereplicationsubnetgroupsresponse.h"
#include "describereplicationsubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeReplicationSubnetGroupsResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeReplicationSubnetGroups responses.
 *
 * @see    DatabaseMigrationServiceClient::describeReplicationSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeReplicationSubnetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReplicationSubnetGroupsResponse::DescribeReplicationSubnetGroupsResponse(
        const DescribeReplicationSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeReplicationSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationSubnetGroupsRequest(request));
    setReply(reply);
}

const DescribeReplicationSubnetGroupsRequest * DescribeReplicationSubnetGroupsResponse::request() const
{
    Q_D(const DescribeReplicationSubnetGroupsResponse);
    return static_cast<const DescribeReplicationSubnetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeReplicationSubnetGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeReplicationSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReplicationSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReplicationSubnetGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeReplicationSubnetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReplicationSubnetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReplicationSubnetGroupsResponse instance.
 */
DescribeReplicationSubnetGroupsResponsePrivate::DescribeReplicationSubnetGroupsResponsePrivate(
    DescribeReplicationSubnetGroupsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeReplicationSubnetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReplicationSubnetGroupsResponsePrivate::DescribeReplicationSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationSubnetGroupsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
