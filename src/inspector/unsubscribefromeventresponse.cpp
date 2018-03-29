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

#include "unsubscribefromeventresponse.h"
#include "unsubscribefromeventresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  UnsubscribeFromEventResponse
 *
 * @brief  Handles Inspector UnsubscribeFromEvent responses.
 *
 * @see    InspectorClient::unsubscribeFromEvent
 */

/**
 * @brief  Constructs a new UnsubscribeFromEventResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnsubscribeFromEventResponse::UnsubscribeFromEventResponse(
        const UnsubscribeFromEventRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UnsubscribeFromEventResponse(new UnsubscribeFromEventResponsePrivate(this), parent)
{
    setRequest(new UnsubscribeFromEventRequest(request));
    setReply(reply);
}

const UnsubscribeFromEventRequest * UnsubscribeFromEventResponse::request() const
{
    Q_D(const UnsubscribeFromEventResponse);
    return static_cast<const UnsubscribeFromEventRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector UnsubscribeFromEvent response.
 *
 * @param  response  Response to parse.
 */
void UnsubscribeFromEventResponse::parseSuccess(QIODevice &response)
{
    Q_D(UnsubscribeFromEventResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnsubscribeFromEventResponsePrivate
 *
 * @brief  Private implementation for UnsubscribeFromEventResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnsubscribeFromEventResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnsubscribeFromEventResponse instance.
 */
UnsubscribeFromEventResponsePrivate::UnsubscribeFromEventResponsePrivate(
    UnsubscribeFromEventResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector UnsubscribeFromEventResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnsubscribeFromEventResponsePrivate::parseUnsubscribeFromEventResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnsubscribeFromEventResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
