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

#include "listgroupmembersresponse.h"
#include "listgroupmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMail {

/**
 * @class  ListGroupMembersResponse
 *
 * @brief  Handles WorkMail ListGroupMembers responses.
 *
 * @see    WorkMailClient::listGroupMembers
 */

/**
 * @brief  Constructs a new ListGroupMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGroupMembersResponse::ListGroupMembersResponse(
        const ListGroupMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new ListGroupMembersResponsePrivate(this), parent)
{
    setRequest(new ListGroupMembersRequest(request));
    setReply(reply);
}

const ListGroupMembersRequest * ListGroupMembersResponse::request() const
{
    Q_D(const ListGroupMembersResponse);
    return static_cast<const ListGroupMembersRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail ListGroupMembers response.
 *
 * @param  response  Response to parse.
 */
void ListGroupMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGroupMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGroupMembersResponsePrivate
 *
 * @brief  Private implementation for ListGroupMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGroupMembersResponse instance.
 */
ListGroupMembersResponsePrivate::ListGroupMembersResponsePrivate(
    ListGroupMembersResponse * const q) : WorkMailResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail ListGroupMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGroupMembersResponsePrivate::ListGroupMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupMembersResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace QtAws
