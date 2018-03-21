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

#include "listrolesresponse.h"
#include "listrolesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListRolesResponse
 *
 * @brief  Handles IAM ListRoles responses.
 *
 * @see    IAMClient::listRoles
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRolesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListRolesResponsePrivate(this), parent)
{
    setRequest(new ListRolesRequest(request));
    setReply(reply);
}

const ListRolesRequest * ListRolesResponse::request() const
{
    Q_D(const ListRolesResponse);
    return static_cast<const ListRolesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListRoles response.
 *
 * @param  response  Response to parse.
 */
void ListRolesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRolesResponsePrivate
 *
 * @brief  Private implementation for ListRolesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRolesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRolesResponse instance.
 */
ListRolesResponsePrivate::ListRolesResponsePrivate(
    ListRolesQueueResponse * const q) : ListRolesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListRolesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRolesResponsePrivate::ListRolesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRolesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
