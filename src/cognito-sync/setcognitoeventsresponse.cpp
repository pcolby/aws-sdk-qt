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

#include "setcognitoeventsresponse.h"
#include "setcognitoeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  SetCognitoEventsResponse
 *
 * @brief  Handles CognitoSync SetCognitoEvents responses.
 *
 * @see    CognitoSyncClient::setCognitoEvents
 */

/**
 * @brief  Constructs a new SetCognitoEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetCognitoEventsResponse::SetCognitoEventsResponse(
        const SetCognitoEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SetCognitoEventsResponse(new SetCognitoEventsResponsePrivate(this), parent)
{
    setRequest(new SetCognitoEventsRequest(request));
    setReply(reply);
}

const SetCognitoEventsRequest * SetCognitoEventsResponse::request() const
{
    Q_D(const SetCognitoEventsResponse);
    return static_cast<const SetCognitoEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync SetCognitoEvents response.
 *
 * @param  response  Response to parse.
 */
void SetCognitoEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetCognitoEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetCognitoEventsResponsePrivate
 *
 * @brief  Private implementation for SetCognitoEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetCognitoEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetCognitoEventsResponse instance.
 */
SetCognitoEventsResponsePrivate::SetCognitoEventsResponsePrivate(
    SetCognitoEventsResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync SetCognitoEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetCognitoEventsResponsePrivate::parseSetCognitoEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetCognitoEventsResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
