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

#include "searchusersresponse.h"
#include "searchusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  SearchUsersResponse
 *
 * @brief  Handles AlexaForBusiness SearchUsers responses.
 *
 * @see    AlexaForBusinessClient::searchUsers
 */

/**
 * @brief  Constructs a new SearchUsersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchUsersResponse::SearchUsersResponse(
        const SearchUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchUsersResponsePrivate(this), parent)
{
    setRequest(new SearchUsersRequest(request));
    setReply(reply);
}

const SearchUsersRequest * SearchUsersResponse::request() const
{
    Q_D(const SearchUsersResponse);
    return static_cast<const SearchUsersRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness SearchUsers response.
 *
 * @param  response  Response to parse.
 */
void SearchUsersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchUsersResponsePrivate
 *
 * @brief  Private implementation for SearchUsersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchUsersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchUsersResponse instance.
 */
SearchUsersResponsePrivate::SearchUsersResponsePrivate(
    SearchUsersQueueResponse * const q) : SearchUsersPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness SearchUsersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchUsersResponsePrivate::SearchUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchUsersResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace AWS
