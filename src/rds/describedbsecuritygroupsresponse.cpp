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

#include "describedbsecuritygroupsresponse.h"
#include "describedbsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBSecurityGroupsResponse
 *
 * @brief  Handles RDS DescribeDBSecurityGroups responses.
 *
 * @see    RDSClient::describeDBSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeDBSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBSecurityGroupsResponse::DescribeDBSecurityGroupsResponse(
        const DescribeDBSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBSecurityGroupsRequest(request));
    setReply(reply);
}

const DescribeDBSecurityGroupsRequest * DescribeDBSecurityGroupsResponse::request() const
{
    Q_D(const DescribeDBSecurityGroupsResponse);
    return static_cast<const DescribeDBSecurityGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBSecurityGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDBSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBSecurityGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeDBSecurityGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSecurityGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBSecurityGroupsResponse instance.
 */
DescribeDBSecurityGroupsResponsePrivate::DescribeDBSecurityGroupsResponsePrivate(
    DescribeDBSecurityGroupsResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBSecurityGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBSecurityGroupsResponsePrivate::DescribeDBSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBSecurityGroupsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
