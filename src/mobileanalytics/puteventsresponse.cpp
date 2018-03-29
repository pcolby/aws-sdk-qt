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

#include "puteventsresponse.h"
#include "puteventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MobileAnalytics {

/**
 * @class  PutEventsResponse
 *
 * @brief  Handles MobileAnalytics PutEvents responses.
 *
 * @see    MobileAnalyticsClient::putEvents
 */

/**
 * @brief  Constructs a new PutEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutEventsResponse::PutEventsResponse(
        const PutEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileAnalyticsResponse(new PutEventsResponsePrivate(this), parent)
{
    setRequest(new PutEventsRequest(request));
    setReply(reply);
}

const PutEventsRequest * PutEventsResponse::request() const
{
    Q_D(const PutEventsResponse);
    return static_cast<const PutEventsRequest *>(d->request);
}

/**
 * @brief  Parse a MobileAnalytics PutEvents response.
 *
 * @param  response  Response to parse.
 */
void PutEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutEventsResponsePrivate
 *
 * @brief  Private implementation for PutEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutEventsResponse instance.
 */
PutEventsResponsePrivate::PutEventsResponsePrivate(
    PutEventsQueueResponse * const q) : PutEventsPrivate(q)
{

}

/**
 * @brief  Parse an MobileAnalytics PutEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutEventsResponsePrivate::PutEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventsResponse"));
    /// @todo
}

} // namespace MobileAnalytics
} // namespace AWS
