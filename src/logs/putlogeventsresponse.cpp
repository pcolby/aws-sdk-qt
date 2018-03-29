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

#include "putlogeventsresponse.h"
#include "putlogeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutLogEventsResponse
 *
 * @brief  Handles CloudWatchLogs PutLogEvents responses.
 *
 * @see    CloudWatchLogsClient::putLogEvents
 */

/**
 * @brief  Constructs a new PutLogEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutLogEventsResponse::PutLogEventsResponse(
        const PutLogEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new PutLogEventsResponsePrivate(this), parent)
{
    setRequest(new PutLogEventsRequest(request));
    setReply(reply);
}

const PutLogEventsRequest * PutLogEventsResponse::request() const
{
    Q_D(const PutLogEventsResponse);
    return static_cast<const PutLogEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs PutLogEvents response.
 *
 * @param  response  Response to parse.
 */
void PutLogEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutLogEventsResponsePrivate
 *
 * @brief  Private implementation for PutLogEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLogEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutLogEventsResponse instance.
 */
PutLogEventsResponsePrivate::PutLogEventsResponsePrivate(
    PutLogEventsQueueResponse * const q) : PutLogEventsPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs PutLogEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutLogEventsResponsePrivate::PutLogEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLogEventsResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
