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

#include "getgroupresponse.h"
#include "getgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  GetGroupResponse
 *
 * @brief  Handles Greengrass GetGroup responses.
 *
 * @see    GreengrassClient::getGroup
 */

/**
 * @brief  Constructs a new GetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupResponse::GetGroupResponse(
        const GetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupResponsePrivate(this), parent)
{
    setRequest(new GetGroupRequest(request));
    setReply(reply);
}

const GetGroupRequest * GetGroupResponse::request() const
{
    Q_D(const GetGroupResponse);
    return static_cast<const GetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetGroup response.
 *
 * @param  response  Response to parse.
 */
void GetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGroupResponsePrivate
 *
 * @brief  Private implementation for GetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGroupResponse instance.
 */
GetGroupResponsePrivate::GetGroupResponsePrivate(
    GetGroupQueueResponse * const q) : GetGroupPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGroupResponsePrivate::GetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
