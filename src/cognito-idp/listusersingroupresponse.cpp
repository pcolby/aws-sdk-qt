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

#include "listusersingroupresponse.h"
#include "listusersingroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ListUsersInGroupResponse
 *
 * @brief  Handles CognitoIdentityProvider ListUsersInGroup responses.
 *
 * @see    CognitoIdentityProviderClient::listUsersInGroup
 */

/**
 * @brief  Constructs a new ListUsersInGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUsersInGroupResponse::ListUsersInGroupResponse(
        const ListUsersInGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUsersInGroupResponsePrivate(this), parent)
{
    setRequest(new ListUsersInGroupRequest(request));
    setReply(reply);
}

const ListUsersInGroupRequest * ListUsersInGroupResponse::request() const
{
    Q_D(const ListUsersInGroupResponse);
    return static_cast<const ListUsersInGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ListUsersInGroup response.
 *
 * @param  response  Response to parse.
 */
void ListUsersInGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUsersInGroupResponsePrivate
 *
 * @brief  Private implementation for ListUsersInGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUsersInGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUsersInGroupResponse instance.
 */
ListUsersInGroupResponsePrivate::ListUsersInGroupResponsePrivate(
    ListUsersInGroupQueueResponse * const q) : ListUsersInGroupPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ListUsersInGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUsersInGroupResponsePrivate::ListUsersInGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersInGroupResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
