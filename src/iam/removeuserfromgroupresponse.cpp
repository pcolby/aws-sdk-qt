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

#include "removeuserfromgroupresponse.h"
#include "removeuserfromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  RemoveUserFromGroupResponse
 *
 * @brief  Handles IAM RemoveUserFromGroup responses.
 *
 * @see    IAMClient::removeUserFromGroup
 */

/**
 * @brief  Constructs a new RemoveUserFromGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveUserFromGroupResponse::RemoveUserFromGroupResponse(
        const RemoveUserFromGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new RemoveUserFromGroupResponsePrivate(this), parent)
{
    setRequest(new RemoveUserFromGroupRequest(request));
    setReply(reply);
}

const RemoveUserFromGroupRequest * RemoveUserFromGroupResponse::request() const
{
    Q_D(const RemoveUserFromGroupResponse);
    return static_cast<const RemoveUserFromGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IAM RemoveUserFromGroup response.
 *
 * @param  response  Response to parse.
 */
void RemoveUserFromGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveUserFromGroupResponsePrivate
 *
 * @brief  Private implementation for RemoveUserFromGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveUserFromGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveUserFromGroupResponse instance.
 */
RemoveUserFromGroupResponsePrivate::RemoveUserFromGroupResponsePrivate(
    RemoveUserFromGroupQueueResponse * const q) : RemoveUserFromGroupPrivate(q)
{

}

/**
 * @brief  Parse an IAM RemoveUserFromGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveUserFromGroupResponsePrivate::RemoveUserFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveUserFromGroupResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
