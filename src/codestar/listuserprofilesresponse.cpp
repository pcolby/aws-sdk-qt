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

#include "listuserprofilesresponse.h"
#include "listuserprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/**
 * @class  ListUserProfilesResponse
 *
 * @brief  Handles CodeStar ListUserProfiles responses.
 *
 * @see    CodeStarClient::listUserProfiles
 */

/**
 * @brief  Constructs a new ListUserProfilesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUserProfilesResponse::ListUserProfilesResponse(
        const ListUserProfilesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListUserProfilesResponse(new ListUserProfilesResponsePrivate(this), parent)
{
    setRequest(new ListUserProfilesRequest(request));
    setReply(reply);
}

const ListUserProfilesRequest * ListUserProfilesResponse::request() const
{
    Q_D(const ListUserProfilesResponse);
    return static_cast<const ListUserProfilesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeStar ListUserProfiles response.
 *
 * @param  response  Response to parse.
 */
void ListUserProfilesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListUserProfilesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUserProfilesResponsePrivate
 *
 * @brief  Private implementation for ListUserProfilesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserProfilesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUserProfilesResponse instance.
 */
ListUserProfilesResponsePrivate::ListUserProfilesResponsePrivate(
    ListUserProfilesResponse * const q) : CodeStarResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeStar ListUserProfilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUserProfilesResponsePrivate::parseListUserProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserProfilesResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace QtAws
