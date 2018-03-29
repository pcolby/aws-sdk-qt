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

#include "searchgamesessionsresponse.h"
#include "searchgamesessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  SearchGameSessionsResponse
 *
 * @brief  Handles GameLift SearchGameSessions responses.
 *
 * @see    GameLiftClient::searchGameSessions
 */

/**
 * @brief  Constructs a new SearchGameSessionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SearchGameSessionsResponse::SearchGameSessionsResponse(
        const SearchGameSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new SearchGameSessionsResponsePrivate(this), parent)
{
    setRequest(new SearchGameSessionsRequest(request));
    setReply(reply);
}

const SearchGameSessionsRequest * SearchGameSessionsResponse::request() const
{
    Q_D(const SearchGameSessionsResponse);
    return static_cast<const SearchGameSessionsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift SearchGameSessions response.
 *
 * @param  response  Response to parse.
 */
void SearchGameSessionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SearchGameSessionsResponsePrivate
 *
 * @brief  Private implementation for SearchGameSessionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchGameSessionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SearchGameSessionsResponse instance.
 */
SearchGameSessionsResponsePrivate::SearchGameSessionsResponsePrivate(
    SearchGameSessionsQueueResponse * const q) : SearchGameSessionsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift SearchGameSessionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SearchGameSessionsResponsePrivate::SearchGameSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchGameSessionsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
