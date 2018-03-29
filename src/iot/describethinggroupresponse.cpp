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

#include "describethinggroupresponse.h"
#include "describethinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DescribeThingGroupResponse
 *
 * @brief  Handles IoT DescribeThingGroup responses.
 *
 * @see    IoTClient::describeThingGroup
 */

/**
 * @brief  Constructs a new DescribeThingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeThingGroupResponse::DescribeThingGroupResponse(
        const DescribeThingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeThingGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeThingGroupRequest(request));
    setReply(reply);
}

const DescribeThingGroupRequest * DescribeThingGroupResponse::request() const
{
    Q_D(const DescribeThingGroupResponse);
    return static_cast<const DescribeThingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeThingGroup response.
 *
 * @param  response  Response to parse.
 */
void DescribeThingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeThingGroupResponsePrivate
 *
 * @brief  Private implementation for DescribeThingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeThingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeThingGroupResponse instance.
 */
DescribeThingGroupResponsePrivate::DescribeThingGroupResponsePrivate(
    DescribeThingGroupQueueResponse * const q) : DescribeThingGroupPrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeThingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeThingGroupResponsePrivate::DescribeThingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingGroupResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
