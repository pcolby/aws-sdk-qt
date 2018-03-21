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

#include "getcognitoeventsresponse.h"
#include "getcognitoeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  GetCognitoEventsResponse
 *
 * @brief  Handles CognitoSync GetCognitoEvents responses.
 *
 * @see    CognitoSyncClient::getCognitoEvents
 */

/**
 * @brief  Constructs a new GetCognitoEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCognitoEventsResponse::GetCognitoEventsResponse(
        const GetCognitoEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new GetCognitoEventsResponsePrivate(this), parent)
{
    setRequest(new GetCognitoEventsRequest(request));
    setReply(reply);
}

const GetCognitoEventsRequest * GetCognitoEventsResponse::request() const
{
    Q_D(const GetCognitoEventsResponse);
    return static_cast<const GetCognitoEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync GetCognitoEvents response.
 *
 * @param  response  Response to parse.
 */
void GetCognitoEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCognitoEventsResponsePrivate
 *
 * @brief  Private implementation for GetCognitoEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCognitoEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCognitoEventsResponse instance.
 */
GetCognitoEventsResponsePrivate::GetCognitoEventsResponsePrivate(
    GetCognitoEventsQueueResponse * const q) : GetCognitoEventsPrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync GetCognitoEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCognitoEventsResponsePrivate::GetCognitoEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCognitoEventsResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace AWS
