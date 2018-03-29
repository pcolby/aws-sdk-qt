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

#include "describelogstreamsresponse.h"
#include "describelogstreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DescribeLogStreamsResponse
 *
 * @brief  Handles CloudWatchLogs DescribeLogStreams responses.
 *
 * @see    CloudWatchLogsClient::describeLogStreams
 */

/**
 * @brief  Constructs a new DescribeLogStreamsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLogStreamsResponse::DescribeLogStreamsResponse(
        const DescribeLogStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeLogStreamsResponsePrivate(this), parent)
{
    setRequest(new DescribeLogStreamsRequest(request));
    setReply(reply);
}

const DescribeLogStreamsRequest * DescribeLogStreamsResponse::request() const
{
    Q_D(const DescribeLogStreamsResponse);
    return static_cast<const DescribeLogStreamsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeLogStreams response.
 *
 * @param  response  Response to parse.
 */
void DescribeLogStreamsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLogStreamsResponsePrivate
 *
 * @brief  Private implementation for DescribeLogStreamsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLogStreamsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLogStreamsResponse instance.
 */
DescribeLogStreamsResponsePrivate::DescribeLogStreamsResponsePrivate(
    DescribeLogStreamsQueueResponse * const q) : DescribeLogStreamsPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeLogStreamsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLogStreamsResponsePrivate::DescribeLogStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLogStreamsResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
