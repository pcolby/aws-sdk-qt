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

#include "describedbclusterparametergroupsresponse.h"
#include "describedbclusterparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBClusterParameterGroupsResponse
 *
 * @brief  Handles RDS DescribeDBClusterParameterGroups responses.
 *
 * @see    RDSClient::describeDBClusterParameterGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClusterParameterGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBClusterParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParameterGroupsRequest(request));
    setReply(reply);
}

const DescribeDBClusterParameterGroupsRequest * DescribeDBClusterParameterGroupsResponse::request() const
{
    Q_D(const DescribeDBClusterParameterGroupsResponse);
    return static_cast<const DescribeDBClusterParameterGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBClusterParameterGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBClusterParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBClusterParameterGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeDBClusterParameterGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterParameterGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBClusterParameterGroupsResponse instance.
 */
DescribeDBClusterParameterGroupsResponsePrivate::DescribeDBClusterParameterGroupsResponsePrivate(
    DescribeDBClusterParameterGroupsQueueResponse * const q) : DescribeDBClusterParameterGroupsPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBClusterParameterGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBClusterParameterGroupsResponsePrivate::DescribeDBClusterParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParameterGroupsResponse"));
    /// @todo
}
