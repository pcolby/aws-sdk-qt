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

#include "describestalesecuritygroupsresponse.h"
#include "describestalesecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeStaleSecurityGroupsResponse
 *
 * @brief  Handles EC2 DescribeStaleSecurityGroups responses.
 *
 * @see    EC2Client::describeStaleSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeStaleSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStaleSecurityGroupsResponse::DescribeStaleSecurityGroupsResponse(
        const DescribeStaleSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeStaleSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeStaleSecurityGroupsRequest(request));
    setReply(reply);
}

const DescribeStaleSecurityGroupsRequest * DescribeStaleSecurityGroupsResponse::request() const
{
    Q_D(const DescribeStaleSecurityGroupsResponse);
    return static_cast<const DescribeStaleSecurityGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeStaleSecurityGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeStaleSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeStaleSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStaleSecurityGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeStaleSecurityGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStaleSecurityGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStaleSecurityGroupsResponse instance.
 */
DescribeStaleSecurityGroupsResponsePrivate::DescribeStaleSecurityGroupsResponsePrivate(
    DescribeStaleSecurityGroupsResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeStaleSecurityGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStaleSecurityGroupsResponsePrivate::DescribeStaleSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStaleSecurityGroupsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
