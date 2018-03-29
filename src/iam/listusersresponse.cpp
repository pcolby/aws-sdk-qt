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

#include "listusersresponse.h"
#include "listusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListUsersResponse
 *
 * @brief  Handles IAM ListUsers responses.
 *
 * @see    IAMClient::listUsers
 */

/**
 * @brief  Constructs a new ListUsersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUsersResponse::ListUsersResponse(
        const ListUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListUsersResponsePrivate(this), parent)
{
    setRequest(new ListUsersRequest(request));
    setReply(reply);
}

const ListUsersRequest * ListUsersResponse::request() const
{
    Q_D(const ListUsersResponse);
    return static_cast<const ListUsersRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListUsers response.
 *
 * @param  response  Response to parse.
 */
void ListUsersResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUsersResponsePrivate
 *
 * @brief  Private implementation for ListUsersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUsersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUsersResponse instance.
 */
ListUsersResponsePrivate::ListUsersResponsePrivate(
    ListUsersResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListUsersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUsersResponsePrivate::ListUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsersResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
