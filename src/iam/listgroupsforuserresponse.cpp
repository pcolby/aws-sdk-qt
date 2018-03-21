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

#include "listgroupsforuserresponse.h"
#include "listgroupsforuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListGroupsForUserResponse
 *
 * @brief  Handles IAM ListGroupsForUser responses.
 *
 * @see    IAMClient::listGroupsForUser
 */

/**
 * @brief  Constructs a new ListGroupsForUserResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupsForUserResponse::ListGroupsForUserResponse(
        const ListGroupsForUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListGroupsForUserResponsePrivate(this), parent)
{
    setRequest(new ListGroupsForUserRequest(request));
    setReply(reply);
}

const ListGroupsForUserRequest * ListGroupsForUserResponse::request() const
{
    Q_D(const ListGroupsForUserResponse);
    return static_cast<const ListGroupsForUserRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListGroupsForUser response.
 *
 * @param  response  Response to parse.
 */
void ListGroupsForUserResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGroupsForUserResponsePrivate
 *
 * @brief  Private implementation for ListGroupsForUserResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupsForUserResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGroupsForUserResponse instance.
 */
ListGroupsForUserResponsePrivate::ListGroupsForUserResponsePrivate(
    ListGroupsForUserQueueResponse * const q) : ListGroupsForUserPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListGroupsForUserResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGroupsForUserResponsePrivate::ListGroupsForUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupsForUserResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
