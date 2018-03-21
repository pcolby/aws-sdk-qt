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

#include "addusertogroupresponse.h"
#include "addusertogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  AddUserToGroupResponse
 *
 * @brief  Handles IAM AddUserToGroup responses.
 *
 * @see    IAMClient::addUserToGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddUserToGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new AddUserToGroupResponsePrivate(this), parent)
{
    setRequest(new AddUserToGroupRequest(request));
    setReply(reply);
}

const AddUserToGroupRequest * AddUserToGroupResponse::request() const
{
    Q_D(const AddUserToGroupResponse);
    return static_cast<const AddUserToGroupRequest *>(d->request);
}

/**
 * @brief  Parse a IAM AddUserToGroup response.
 *
 * @param  response  Response to parse.
 */
void AddUserToGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddUserToGroupResponsePrivate
 *
 * @brief  Private implementation for AddUserToGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddUserToGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddUserToGroupResponse instance.
 */
AddUserToGroupResponsePrivate::AddUserToGroupResponsePrivate(
    AddUserToGroupQueueResponse * const q) : AddUserToGroupPrivate(q)
{

}

/**
 * @brief  Parse an IAM AddUserToGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddUserToGroupResponsePrivate::AddUserToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddUserToGroupResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
