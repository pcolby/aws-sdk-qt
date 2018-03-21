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

#include "lookupeventsresponse.h"
#include "lookupeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  LookupEventsResponse
 *
 * @brief  Handles CloudTrail LookupEvents responses.
 *
 * @see    CloudTrailClient::lookupEvents
 */

/**
 * @brief  Constructs a new LookupEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
LookupEventsResponse::LookupEventsResponse(
        const LookupEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new LookupEventsResponsePrivate(this), parent)
{
    setRequest(new LookupEventsRequest(request));
    setReply(reply);
}

const LookupEventsRequest * LookupEventsResponse::request() const
{
    Q_D(const LookupEventsResponse);
    return static_cast<const LookupEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail LookupEvents response.
 *
 * @param  response  Response to parse.
 */
void LookupEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  LookupEventsResponsePrivate
 *
 * @brief  Private implementation for LookupEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LookupEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LookupEventsResponse instance.
 */
LookupEventsResponsePrivate::LookupEventsResponsePrivate(
    LookupEventsQueueResponse * const q) : LookupEventsPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail LookupEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void LookupEventsResponsePrivate::LookupEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("LookupEventsResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace AWS
