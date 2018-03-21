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

#include "listuserprofilesresponse.h"
#include "listuserprofilesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
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
    : CodeStarResponse(new ListUserProfilesResponsePrivate(this), parent)
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
    Q_D(Response);
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
    ListUserProfilesQueueResponse * const q) : ListUserProfilesPrivate(q)
{

}

/**
 * @brief  Parse an CodeStar ListUserProfilesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUserProfilesResponsePrivate::ListUserProfilesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserProfilesResponse"));
    /// @todo
}

} // namespace CodeStar
} // namespace AWS
