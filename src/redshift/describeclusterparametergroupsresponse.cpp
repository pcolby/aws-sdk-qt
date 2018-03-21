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

#include "describeclusterparametergroupsresponse.h"
#include "describeclusterparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterParameterGroupsResponse
 *
 * @brief  Handles Redshift DescribeClusterParameterGroups responses.
 *
 * @see    RedshiftClient::describeClusterParameterGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterParameterGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeClusterParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterParameterGroupsRequest(request));
    setReply(reply);
}

const DescribeClusterParameterGroupsRequest * DescribeClusterParameterGroupsResponse::request() const
{
    Q_D(const DescribeClusterParameterGroupsResponse);
    return static_cast<const DescribeClusterParameterGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeClusterParameterGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeClusterParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClusterParameterGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeClusterParameterGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterParameterGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClusterParameterGroupsResponse instance.
 */
DescribeClusterParameterGroupsResponsePrivate::DescribeClusterParameterGroupsResponsePrivate(
    DescribeClusterParameterGroupsQueueResponse * const q) : DescribeClusterParameterGroupsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeClusterParameterGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClusterParameterGroupsResponsePrivate::DescribeClusterParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterParameterGroupsResponse"));
    /// @todo
}
