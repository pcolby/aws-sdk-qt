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

#include "listfleetsresponse.h"
#include "listfleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  ListFleetsResponse
 *
 * @brief  Handles GameLift ListFleets responses.
 *
 * @see    GameLiftClient::listFleets
 */

/**
 * @brief  Constructs a new ListFleetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFleetsResponse::ListFleetsResponse(
        const ListFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new ListFleetsResponsePrivate(this), parent)
{
    setRequest(new ListFleetsRequest(request));
    setReply(reply);
}

const ListFleetsRequest * ListFleetsResponse::request() const
{
    Q_D(const ListFleetsResponse);
    return static_cast<const ListFleetsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift ListFleets response.
 *
 * @param  response  Response to parse.
 */
void ListFleetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFleetsResponsePrivate
 *
 * @brief  Private implementation for ListFleetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFleetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFleetsResponse instance.
 */
ListFleetsResponsePrivate::ListFleetsResponsePrivate(
    ListFleetsQueueResponse * const q) : ListFleetsPrivate(q)
{

}

/**
 * @brief  Parse an GameLift ListFleetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFleetsResponsePrivate::ListFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFleetsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
