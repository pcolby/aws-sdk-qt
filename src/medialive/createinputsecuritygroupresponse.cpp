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

#include "createinputsecuritygroupresponse.h"
#include "createinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MediaLive {

/**
 * @class  CreateInputSecurityGroupResponse
 *
 * @brief  Handles MediaLive CreateInputSecurityGroup responses.
 *
 * @see    MediaLiveClient::createInputSecurityGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateInputSecurityGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateInputSecurityGroupRequest(request));
    setReply(reply);
}

const CreateInputSecurityGroupRequest * CreateInputSecurityGroupResponse::request() const
{
    Q_D(const CreateInputSecurityGroupResponse);
    return static_cast<const CreateInputSecurityGroupRequest *>(d->request);
}

/**
 * @brief  Parse a MediaLive CreateInputSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateInputSecurityGroupResponsePrivate
 *
 * @brief  Private implementation for CreateInputSecurityGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateInputSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateInputSecurityGroupResponse instance.
 */
CreateInputSecurityGroupResponsePrivate::CreateInputSecurityGroupResponsePrivate(
    CreateInputSecurityGroupQueueResponse * const q) : CreateInputSecurityGroupPrivate(q)
{

}

/**
 * @brief  Parse an MediaLive CreateInputSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateInputSecurityGroupResponsePrivate::CreateInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInputSecurityGroupResponse"));
    /// @todo
}
