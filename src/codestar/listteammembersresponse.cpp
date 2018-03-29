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

#include "listteammembersresponse.h"
#include "listteammembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/**
 * @class  ListTeamMembersResponse
 *
 * @brief  Handles CodeStar ListTeamMembers responses.
 *
 * @see    CodeStarClient::listTeamMembers
 */

/**
 * @brief  Constructs a new ListTeamMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTeamMembersResponse::ListTeamMembersResponse(
        const ListTeamMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListTeamMembersResponse(new ListTeamMembersResponsePrivate(this), parent)
{
    setRequest(new ListTeamMembersRequest(request));
    setReply(reply);
}

const ListTeamMembersRequest * ListTeamMembersResponse::request() const
{
    Q_D(const ListTeamMembersResponse);
    return static_cast<const ListTeamMembersRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar ListTeamMembers response.
 *
 * @param  response  Response to parse.
 */
void ListTeamMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTeamMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTeamMembersResponsePrivate
 *
 * @brief  Private implementation for ListTeamMembersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTeamMembersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTeamMembersResponse instance.
 */
ListTeamMembersResponsePrivate::ListTeamMembersResponsePrivate(
    ListTeamMembersResponse * const q) : CodeStarResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeStar ListTeamMembersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTeamMembersResponsePrivate::parseListTeamMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTeamMembersResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace QtAws
