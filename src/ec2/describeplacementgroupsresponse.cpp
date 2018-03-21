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

#include "describeplacementgroupsresponse.h"
#include "describeplacementgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribePlacementGroupsResponse
 *
 * @brief  Handles EC2 DescribePlacementGroups responses.
 *
 * @see    EC2Client::describePlacementGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePlacementGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribePlacementGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribePlacementGroupsRequest(request));
    setReply(reply);
}

const DescribePlacementGroupsRequest * DescribePlacementGroupsResponse::request() const
{
    Q_D(const DescribePlacementGroupsResponse);
    return static_cast<const DescribePlacementGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribePlacementGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribePlacementGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePlacementGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribePlacementGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePlacementGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePlacementGroupsResponse instance.
 */
DescribePlacementGroupsResponsePrivate::DescribePlacementGroupsResponsePrivate(
    DescribePlacementGroupsQueueResponse * const q) : DescribePlacementGroupsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribePlacementGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePlacementGroupsResponsePrivate::DescribePlacementGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePlacementGroupsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
