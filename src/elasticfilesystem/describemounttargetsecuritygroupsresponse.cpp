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

#include "describemounttargetsecuritygroupsresponse.h"
#include "describemounttargetsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/**
 * @class  DescribeMountTargetSecurityGroupsResponse
 *
 * @brief  Handles EFS DescribeMountTargetSecurityGroups responses.
 *
 * @see    EFSClient::describeMountTargetSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeMountTargetSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMountTargetSecurityGroupsResponse::DescribeMountTargetSecurityGroupsResponse(
        const DescribeMountTargetSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EFSResponse(new DescribeMountTargetSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeMountTargetSecurityGroupsRequest(request));
    setReply(reply);
}

const DescribeMountTargetSecurityGroupsRequest * DescribeMountTargetSecurityGroupsResponse::request() const
{
    Q_D(const DescribeMountTargetSecurityGroupsResponse);
    return static_cast<const DescribeMountTargetSecurityGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a EFS DescribeMountTargetSecurityGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeMountTargetSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMountTargetSecurityGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeMountTargetSecurityGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMountTargetSecurityGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMountTargetSecurityGroupsResponse instance.
 */
DescribeMountTargetSecurityGroupsResponsePrivate::DescribeMountTargetSecurityGroupsResponsePrivate(
    DescribeMountTargetSecurityGroupsResponse * const q) : EFSResponsePrivate(q)
{

}

/**
 * @brief  Parse an EFS DescribeMountTargetSecurityGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMountTargetSecurityGroupsResponsePrivate::DescribeMountTargetSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMountTargetSecurityGroupsResponse"));
    /// @todo
}

} // namespace EFS
} // namespace QtAws
