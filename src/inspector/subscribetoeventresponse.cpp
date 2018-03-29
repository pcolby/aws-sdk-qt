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

#include "subscribetoeventresponse.h"
#include "subscribetoeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  SubscribeToEventResponse
 *
 * @brief  Handles Inspector SubscribeToEvent responses.
 *
 * @see    InspectorClient::subscribeToEvent
 */

/**
 * @brief  Constructs a new SubscribeToEventResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SubscribeToEventResponse::SubscribeToEventResponse(
        const SubscribeToEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SubscribeToEventResponse(new SubscribeToEventResponsePrivate(this), parent)
{
    setRequest(new SubscribeToEventRequest(request));
    setReply(reply);
}

const SubscribeToEventRequest * SubscribeToEventResponse::request() const
{
    Q_D(const SubscribeToEventResponse);
    return static_cast<const SubscribeToEventRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector SubscribeToEvent response.
 *
 * @param  response  Response to parse.
 */
void SubscribeToEventResponse::parseSuccess(QIODevice &response)
{
    Q_D(SubscribeToEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SubscribeToEventResponsePrivate
 *
 * @brief  Private implementation for SubscribeToEventResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeToEventResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SubscribeToEventResponse instance.
 */
SubscribeToEventResponsePrivate::SubscribeToEventResponsePrivate(
    SubscribeToEventResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector SubscribeToEventResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SubscribeToEventResponsePrivate::parseSubscribeToEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SubscribeToEventResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
