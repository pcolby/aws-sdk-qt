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

#include "createlogstreamresponse.h"
#include "createlogstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  CreateLogStreamResponse
 *
 * @brief  Handles CloudWatchLogs CreateLogStream responses.
 *
 * @see    CloudWatchLogsClient::createLogStream
 */

/**
 * @brief  Constructs a new CreateLogStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLogStreamResponse::CreateLogStreamResponse(
        const CreateLogStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new CreateLogStreamResponsePrivate(this), parent)
{
    setRequest(new CreateLogStreamRequest(request));
    setReply(reply);
}

const CreateLogStreamRequest * CreateLogStreamResponse::request() const
{
    Q_D(const CreateLogStreamResponse);
    return static_cast<const CreateLogStreamRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs CreateLogStream response.
 *
 * @param  response  Response to parse.
 */
void CreateLogStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLogStreamResponsePrivate
 *
 * @brief  Private implementation for CreateLogStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLogStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLogStreamResponse instance.
 */
CreateLogStreamResponsePrivate::CreateLogStreamResponsePrivate(
    CreateLogStreamQueueResponse * const q) : CreateLogStreamPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs CreateLogStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLogStreamResponsePrivate::CreateLogStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLogStreamResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
