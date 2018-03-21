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

#include "filterlogeventsresponse.h"
#include "filterlogeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  FilterLogEventsResponse
 *
 * @brief  Handles CloudWatchLogs FilterLogEvents responses.
 *
 * @see    CloudWatchLogsClient::filterLogEvents
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
FilterLogEventsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new FilterLogEventsResponsePrivate(this), parent)
{
    setRequest(new FilterLogEventsRequest(request));
    setReply(reply);
}

const FilterLogEventsRequest * FilterLogEventsResponse::request() const
{
    Q_D(const FilterLogEventsResponse);
    return static_cast<const FilterLogEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs FilterLogEvents response.
 *
 * @param  response  Response to parse.
 */
void FilterLogEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  FilterLogEventsResponsePrivate
 *
 * @brief  Private implementation for FilterLogEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FilterLogEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public FilterLogEventsResponse instance.
 */
FilterLogEventsResponsePrivate::FilterLogEventsResponsePrivate(
    FilterLogEventsQueueResponse * const q) : FilterLogEventsPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs FilterLogEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void FilterLogEventsResponsePrivate::FilterLogEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FilterLogEventsResponse"));
    /// @todo
}
