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

#include "describeeventbusresponse.h"
#include "describeeventbusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/**
 * @class  DescribeEventBusResponse
 *
 * @brief  Handles CloudWatchEvents DescribeEventBus responses.
 *
 * @see    CloudWatchEventsClient::describeEventBus
 */

/**
 * @brief  Constructs a new DescribeEventBusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEventBusResponse::DescribeEventBusResponse(
        const DescribeEventBusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeEventBusResponse(new DescribeEventBusResponsePrivate(this), parent)
{
    setRequest(new DescribeEventBusRequest(request));
    setReply(reply);
}

const DescribeEventBusRequest * DescribeEventBusResponse::request() const
{
    Q_D(const DescribeEventBusResponse);
    return static_cast<const DescribeEventBusRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchEvents DescribeEventBus response.
 *
 * @param  response  Response to parse.
 */
void DescribeEventBusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEventBusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEventBusResponsePrivate
 *
 * @brief  Private implementation for DescribeEventBusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEventBusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEventBusResponse instance.
 */
DescribeEventBusResponsePrivate::DescribeEventBusResponsePrivate(
    DescribeEventBusResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchEvents DescribeEventBusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEventBusResponsePrivate::parseDescribeEventBusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventBusResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
