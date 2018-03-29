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

#include "describedeliverystreamresponse.h"
#include "describedeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/**
 * @class  DescribeDeliveryStreamResponse
 *
 * @brief  Handles Firehose DescribeDeliveryStream responses.
 *
 * @see    FirehoseClient::describeDeliveryStream
 */

/**
 * @brief  Constructs a new DescribeDeliveryStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDeliveryStreamResponse::DescribeDeliveryStreamResponse(
        const DescribeDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new DescribeDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new DescribeDeliveryStreamRequest(request));
    setReply(reply);
}

const DescribeDeliveryStreamRequest * DescribeDeliveryStreamResponse::request() const
{
    Q_D(const DescribeDeliveryStreamResponse);
    return static_cast<const DescribeDeliveryStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Firehose DescribeDeliveryStream response.
 *
 * @param  response  Response to parse.
 */
void DescribeDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDeliveryStreamResponsePrivate
 *
 * @brief  Private implementation for DescribeDeliveryStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDeliveryStreamResponse instance.
 */
DescribeDeliveryStreamResponsePrivate::DescribeDeliveryStreamResponsePrivate(
    DescribeDeliveryStreamQueueResponse * const q) : DescribeDeliveryStreamPrivate(q)
{

}

/**
 * @brief  Parse an Firehose DescribeDeliveryStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDeliveryStreamResponsePrivate::DescribeDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeliveryStreamResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
