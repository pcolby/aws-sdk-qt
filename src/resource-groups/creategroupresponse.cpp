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

#include "creategroupresponse.h"
#include "creategroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroups {

/**
 * @class  CreateGroupResponse
 *
 * @brief  Handles ResourceGroups CreateGroup responses.
 *
 * @see    ResourceGroupsClient::createGroup
 */

/**
 * @brief  Constructs a new CreateGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGroupResponse::CreateGroupResponse(
        const CreateGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new CreateGroupResponsePrivate(this), parent)
{
    setRequest(new CreateGroupRequest(request));
    setReply(reply);
}

const CreateGroupRequest * CreateGroupResponse::request() const
{
    Q_D(const CreateGroupResponse);
    return static_cast<const CreateGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ResourceGroups CreateGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGroupResponsePrivate
 *
 * @brief  Private implementation for CreateGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGroupResponse instance.
 */
CreateGroupResponsePrivate::CreateGroupResponsePrivate(
    CreateGroupQueueResponse * const q) : CreateGroupPrivate(q)
{

}

/**
 * @brief  Parse an ResourceGroups CreateGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGroupResponsePrivate::CreateGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupResponse"));
    /// @todo
}

} // namespace ResourceGroups
} // namespace AWS
