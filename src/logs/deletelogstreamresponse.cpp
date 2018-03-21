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

#include "deletelogstreamresponse.h"
#include "deletelogstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteLogStreamResponse
 *
 * @brief  Handles CloudWatchLogs DeleteLogStream responses.
 *
 * @see    CloudWatchLogsClient::deleteLogStream
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLogStreamResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteLogStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteLogStreamRequest(request));
    setReply(reply);
}

const DeleteLogStreamRequest * DeleteLogStreamResponse::request() const
{
    Q_D(const DeleteLogStreamResponse);
    return static_cast<const DeleteLogStreamRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DeleteLogStream response.
 *
 * @param  response  Response to parse.
 */
void DeleteLogStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLogStreamResponsePrivate
 *
 * @brief  Private implementation for DeleteLogStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLogStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLogStreamResponse instance.
 */
DeleteLogStreamResponsePrivate::DeleteLogStreamResponsePrivate(
    DeleteLogStreamQueueResponse * const q) : DeleteLogStreamPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DeleteLogStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLogStreamResponsePrivate::DeleteLogStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLogStreamResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
