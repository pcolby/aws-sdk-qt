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

#include "listmembersresponse.h"
#include "listmembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  ListMembersResponse
 *
 * @brief  Handles GuardDuty ListMembers responses.
 *
 * @see    GuardDutyClient::listMembers
 */

/**
 * @brief  Constructs a new ListMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListMembersResponse::ListMembersResponse(
        const ListMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListMembersResponsePrivate(this), parent)
{
    setRequest(new ListMembersRequest(request));
    setReply(reply);
}

const ListMembersRequest * ListMembersResponse::request() const
{
    Q_D(const ListMembersResponse);
    return static_cast<const ListMembersRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty ListMembers response.
 *
 * @param  response  Response to parse.
 */
void ListMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListMembersResponsePrivate
 *
 * @brief  Private implementation for ListMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListMembersResponse instance.
 */
ListMembersResponsePrivate::ListMembersResponsePrivate(
    ListMembersQueueResponse * const q) : ListMembersPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty ListMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListMembersResponsePrivate::ListMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
