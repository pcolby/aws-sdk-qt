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

#include "describedestinationsresponse.h"
#include "describedestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DescribeDestinationsResponse
 *
 * @brief  Handles CloudWatchLogs DescribeDestinations responses.
 *
 * @see    CloudWatchLogsClient::describeDestinations
 */

/**
 * @brief  Constructs a new DescribeDestinationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDestinationsResponse::DescribeDestinationsResponse(
        const DescribeDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeDestinationsResponsePrivate(this), parent)
{
    setRequest(new DescribeDestinationsRequest(request));
    setReply(reply);
}

const DescribeDestinationsRequest * DescribeDestinationsResponse::request() const
{
    Q_D(const DescribeDestinationsResponse);
    return static_cast<const DescribeDestinationsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DescribeDestinations response.
 *
 * @param  response  Response to parse.
 */
void DescribeDestinationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDestinationsResponsePrivate
 *
 * @brief  Private implementation for DescribeDestinationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDestinationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDestinationsResponse instance.
 */
DescribeDestinationsResponsePrivate::DescribeDestinationsResponsePrivate(
    DescribeDestinationsQueueResponse * const q) : DescribeDestinationsPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DescribeDestinationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDestinationsResponsePrivate::DescribeDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDestinationsResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
