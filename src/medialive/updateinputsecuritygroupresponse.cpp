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

#include "updateinputsecuritygroupresponse.h"
#include "updateinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  UpdateInputSecurityGroupResponse
 *
 * @brief  Handles MediaLive UpdateInputSecurityGroup responses.
 *
 * @see    MediaLiveClient::updateInputSecurityGroup
 */

/**
 * @brief  Constructs a new UpdateInputSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateInputSecurityGroupResponse::UpdateInputSecurityGroupResponse(
        const UpdateInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateInputSecurityGroupRequest(request));
    setReply(reply);
}

const UpdateInputSecurityGroupRequest * UpdateInputSecurityGroupResponse::request() const
{
    Q_D(const UpdateInputSecurityGroupResponse);
    return static_cast<const UpdateInputSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive UpdateInputSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateInputSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateInputSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateInputSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateInputSecurityGroupResponse instance.
 */
UpdateInputSecurityGroupResponsePrivate::UpdateInputSecurityGroupResponsePrivate(
    UpdateInputSecurityGroupQueueResponse * const q) : UpdateInputSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive UpdateInputSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateInputSecurityGroupResponsePrivate::UpdateInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputSecurityGroupResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace AWS
