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

#include "describeclustersecuritygroupsresponse.h"
#include "describeclustersecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeClusterSecurityGroupsResponse
 *
 * @brief  Handles Redshift DescribeClusterSecurityGroups responses.
 *
 * @see    RedshiftClient::describeClusterSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeClusterSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClusterSecurityGroupsResponse::DescribeClusterSecurityGroupsResponse(
        const DescribeClusterSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeClusterSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterSecurityGroupsRequest(request));
    setReply(reply);
}

const DescribeClusterSecurityGroupsRequest * DescribeClusterSecurityGroupsResponse::request() const
{
    Q_D(const DescribeClusterSecurityGroupsResponse);
    return static_cast<const DescribeClusterSecurityGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeClusterSecurityGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeClusterSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClusterSecurityGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeClusterSecurityGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSecurityGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClusterSecurityGroupsResponse instance.
 */
DescribeClusterSecurityGroupsResponsePrivate::DescribeClusterSecurityGroupsResponsePrivate(
    DescribeClusterSecurityGroupsResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeClusterSecurityGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClusterSecurityGroupsResponsePrivate::DescribeClusterSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterSecurityGroupsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
