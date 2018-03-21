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

#include "getlogeventsresponse.h"
#include "getlogeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  GetLogEventsResponse
 *
 * @brief  Handles CloudWatchLogs GetLogEvents responses.
 *
 * @see    CloudWatchLogsClient::getLogEvents
 */

/**
 * @brief  Constructs a new GetLogEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLogEventsResponse::GetLogEventsResponse(
        const GetLogEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new GetLogEventsResponsePrivate(this), parent)
{
    setRequest(new GetLogEventsRequest(request));
    setReply(reply);
}

const GetLogEventsRequest * GetLogEventsResponse::request() const
{
    Q_D(const GetLogEventsResponse);
    return static_cast<const GetLogEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs GetLogEvents response.
 *
 * @param  response  Response to parse.
 */
void GetLogEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLogEventsResponsePrivate
 *
 * @brief  Private implementation for GetLogEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLogEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLogEventsResponse instance.
 */
GetLogEventsResponsePrivate::GetLogEventsResponsePrivate(
    GetLogEventsQueueResponse * const q) : GetLogEventsPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs GetLogEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLogEventsResponsePrivate::GetLogEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLogEventsResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
